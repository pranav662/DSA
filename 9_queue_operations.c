#include <stdio.h>

// Program by: Pranav Shingne
#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

// Enqueue Operation
void enqueue(int value) {
    if(rear == MAX - 1) {
        printf("Queue Overflow!\n");
    } else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueued into the queue.\n", value);
    }
}

// Dequeue Operation
int dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return -1;
    } else {
        int val = queue[front];
        front++;
        return val;
    }
}

int main() {
    printf("Program executed by: Pranav Shingne\n\n");
    int choice, value;

    while(1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to ENQUEUE: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if(value != -1)
                    printf("Dequeued element: %d\n", value);
                break;
            case 3:
                printf("\n-- Queue operations performed by Pranav Shingne --\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}