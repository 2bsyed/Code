#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // maximum size of the queue

// Queue data structure
typedef struct {
    int front; // index of the front element
    int rear; // index of the rear element
    int items[MAX_SIZE]; // array to store the elements
} Queue;

// function to create an empty queue
Queue createQueue() {
    Queue q;
    q.front = -1;
    q.rear = -1;
    return q;
}

// function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1;
}

// function to check if the queue is full
int isFull(Queue *q) {
    return q->rear == MAX_SIZE - 1;
}

// function to add an item to the queue
void addItem(Queue *q, int item) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (isEmpty(q)) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = item;
        printf("Item added to the queue\n");
    }
}

// function to delete an item from the queue
void deleteItem(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Item deleted from the queue: %d\n", q->items[q->front]);
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else {
            q->front++;
        }
    }
}

// function to show the number of items in the queue
void showItemCount(Queue *q) {
    printf("Number of items in the queue: %d\n", q->rear - q->front + 1);
}

// function to show the minimum and maximum items in the queue
void showMinMaxItems(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        int min = q->items[q->front];
        int max = q->items[q->front];
        for (int i = q->front + 1; i <= q->rear; i++) {
            if (q->items[i] < min) {
                min = q->items[i];
            }
            if (q->items[i] > max) {
                max = q->items[i];
            }
        }
        printf("Minimum item in the queue: %d\n", min);
        printf("Maximum item in the queue: %d\n", max);
    }
}

// function to find an item in the queue
void findItem(Queue *q, int item) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        int found = 0;
        for (int i = q->front; i <= q->rear; i++) {
            if (q->items[i] == item) {
                printf("Item found in the queue at index %d\n", i);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Item not found in the queue\n");
        }
    }
}

// function to print all items in the queue
void printAllItems(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Items inthe queue: ");
for (int i = q->front; i <= q->rear; i++) {
printf("%d ", q->items[i]);
}
printf("\n");
}
}

int main() {
Queue q = createQueue(); // create an empty queue
int choice, item;
do {
    printf("\nMenu:\n");
    printf("1. Add item\n");
    printf("2. Delete item\n");
    printf("3. Show number of items\n");
    printf("4. Show min and max items\n");
    printf("5. Find an item\n");
    printf("6. Print all items\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the item to add: ");
            scanf("%d", &item);
            addItem(&q, item);
            break;
        case 2:
            deleteItem(&q);
            break;
        case 3:
            showItemCount(&q);
            break;
        case 4:
            showMinMaxItems(&q);
            break;
        case 5:
            printf("Enter the item to find: ");
            scanf("%d", &item);
            findItem(&q, item);
            break;
        case 6:
            printAllItems(&q);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }
} while (choice != 7);

return 0;
}