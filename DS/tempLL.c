#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to insert a new node at the beginning of the list
void insertAtBeginning(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("%d inserted at the beginning\n", data);
}

// Function to insert a new node at the end of the list
void insertAtEnd(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        printf("%d inserted at the end\n", data);
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("%d inserted at the end\n", data);
}

// Function to delete a node from the beginning of the list
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    printf("%d deleted from the beginning\n", temp->data);
    free(temp);
}

// Function to delete a node from the end of the list
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        printf("%d deleted from the end\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct node *secondLastNode = head;
    while (secondLastNode->next->next != NULL) {
        secondLastNode = secondLastNode->next;
    }

    struct node *lastNode = secondLastNode->next;
    secondLastNode->next = NULL;
    printf("%d deleted from the end\n", lastNode->data);
    free(lastNode);
}

// Function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to reverse the list
void reverse() {
    struct node *prevNode = NULL;
    struct node *currNode = head;
    struct node *nextNode = NULL;

    while (currNode != NULL) {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }

    head = prevNode;
    printf("List reversed\n");
}

int main() {
    insertAtBeginning(5);
    insertAtBeginning(10);
    insertAtEnd(15);
    display();
    deleteFromEnd();
    deleteFromBeginning();
    display();
    reverse();
    display();
    return 0;
}
