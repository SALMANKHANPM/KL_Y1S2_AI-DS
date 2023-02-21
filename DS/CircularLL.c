#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

void append(int data) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    if (head == NULL) {
        head = new_node;
        new_node->next = head;
    } else {
        struct node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = new_node;
        new_node->next = head;
    }
}

void prepend(int data) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    if (head == NULL) {
        head = new_node;
        new_node->next = head;
    } else {
        struct node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        new_node->next = head;
        head = new_node;
        current->next = head;
    }
}

void print_list() {
    struct node* current = head;
    if (head != NULL) {
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
    }
    printf("\n");
}

int main() {
    append(1);
    append(2);
    append(3);
    prepend(0);
    print_list();
    return 0;
}