#include <stdio.h>
#include <stdlib.h>

// Program created by: Pranav Shingne

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, i, value;

    printf("Program executed by: Pranav Shingne\n\n");

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating Linked List dynamically
    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display original List
    printf("\nOriginal Linked List:\n");
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Reversing Linked List
    struct Node *prev = NULL, *current = head, *nextNode = NULL;

    while(current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;

    // Display reversed List
    printf("\nReversed Linked List:\n");
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    printf("\n-- Linked List reversed by Pranav Shingne --\n");

    return 0;
}