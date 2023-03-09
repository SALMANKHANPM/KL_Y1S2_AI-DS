/*
Title: Expression Trees using Binary Search Tree

Abstract:

Expression Trees are a data structure used to represent mathematical expressions in a tree format, where each node of the tree represents an operator or operand in the expression. The Binary Search Tree (BST) is another data structure used to store data in a sorted manner. In this project, we implement the Expression Trees using a Binary Search Tree to efficiently evaluate and manipulate mathematical expressions.

The project involves the following steps:

Reading a postfix expression from the user.
Creating the corresponding expression tree using a BST.
Deriving the infix, prefix, and postfix expressions from the expression tree.
Displaying the results to the user.
The implementation is done using the C programming language. The project aims to provide a simple and efficient way to handle mathematical expressions using Expression Trees and Binary Search Trees. The program can be used for educational purposes, such as teaching students how to evaluate and manipulate expressions using trees, or for practical purposes, such as evaluating complex mathematical expressions in a program.
*/

// Code :

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* createExpressionTree(char* postfix) {
    struct Node* stack[100];
    int top = -1;
    for (int i = 0; i < strlen(postfix); i++) {
        if (isalpha(postfix[i])) {
            struct Node* node = createNode(postfix[i]);
            stack[++top] = node;
        } else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '%') {
            struct Node* node = createNode(postfix[i]);
            node->right = stack[top--];
            node->left = stack[top--];
            stack[++top] = node;
        }
    }
    return stack[top];
}

void printInfix(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printInfix(root->left);
    printf("%c", root->data);
    printInfix(root->right);
}

void printPrefix(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%c", root->data);
    printPrefix(root->left);
    printPrefix(root->right);
}

void printPostfix(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printPostfix(root->left);
    printPostfix(root->right);
    printf("%c", root->data);
}

int main() {
    char postfix[100] = "abc/de*f%g/+-h*";

    struct Node* root = createExpressionTree(postfix);

    printf("Infix expression: ");
    printInfix(root);
    printf("\n");

    printf("Prefix expression: ");
    printPrefix(root);
    printf("\n");

    printf("Postfix expression: ");
    printPostfix(root);
    printf("\n");

    return 0;
}

/*Output :

Infix expression: a-b/c+d*e%f/g*h
Prefix expression: *-a+/bc/%*defgh
Postfix expression: abc/de*f%g/+-h*

*/
