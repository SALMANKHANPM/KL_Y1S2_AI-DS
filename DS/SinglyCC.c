#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

void insert() {
    node *newnode = (node*)malloc(sizeof(node));  // allocate memory for new node
    node *p = NULL;

    int data;
    printf("Enter Data : ");
    scanf("%d", &data);
    
    newnode->data = data;
    newnode->next = NULL;
    
    if (head == NULL) {
        head = newnode;
    } else {
        p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = newnode;  // add new node to end of list
    }
}

void insertAtBegin(){
    node *newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node));

    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    newnode -> data = data;
    newnode -> next = NULL;

    if (head == NULL){
        printf("No LL Found.");
    }
    else {
        newnode -> next = head;
        head = newnode;
    }
}

void printList() {
    node *p = head;  // use a separate variable to iterate through list
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");  // print "NULL" to indicate end of list
}

int main() {
    int choice;
    do {
        printf("1 for Insertion\n2 for Display\n3 for Insertion at Beginning\n4 to Exit\nEnter your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nInsertion Selected.\n");
                insert();
                break;
            
            case 2:
                printf("\nDisplay Selected.\n");
                printList();
                break;
                
            case 3:
                printf("\nInsertion at Beginning Selected.\n");
                insertAtBegin();
                break;
                
            case 4:
                printf("Exiting Program.\n");
                break;
                
            default:
                printf("Invalid Choice.\n");
                break;

        }
    } while (choice != 5);

    return 0;
}