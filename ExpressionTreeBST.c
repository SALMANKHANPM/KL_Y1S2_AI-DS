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
