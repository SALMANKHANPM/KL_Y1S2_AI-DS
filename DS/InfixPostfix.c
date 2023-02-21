#include <stdio.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

int priority(char x) {
    switch (x) {
        case '(':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

int main() {
    char exp[MAX_STACK_SIZE];
    char *e;
    char x;
    
    printf("Enter the expression: ");
    scanf("%s", exp);
    printf("Postfix expression: ");
    
    for (e = exp; *e != '\0'; e++) {
        if (isalnum(*e)) {
            printf("%c ", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c ", x);
            }
        } else {
            while (priority(stack[top]) >= priority(*e)) {
                printf("%c ", pop());
            }
            push(*e);
        }
    }
    
    while (top != -1) {
        printf("%c ", pop());
    }
    
    return 0;
}
