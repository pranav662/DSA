#include <stdio.h>
#define MAX 50

// Program by: Pranav Shingne

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

void display() {
    int i;
    if(top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for(i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    printf("Program executed by: Pranav Shingne\n\n");

    while(1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nProgram completed by Pranav Shingne.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}