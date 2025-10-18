#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue function
void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is Full!\n");
    } else {
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }
        queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

// Dequeue function
void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty!\n");
    } else if (front == rear) {
        printf("Deleted %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("Deleted %d\n", queue[front]);
        front = (front + 1) % SIZE;
    }
}

// Display function
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue: ");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

