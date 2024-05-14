#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    float x;
    int y;
    struct Node* p;
    struct Node* q;
};

int main() {
    // Create the first node
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the first node
    head->x = 1.5;
    head->y = 7;

    // Create the second node
    struct Node* nextNode = (struct Node*)malloc(sizeof(struct Node));
    if (nextNode == NULL) {
        printf("Memory allocation failed\n");
        free(head); // Free previously allocated memory before exiting
        return 1;
    }

    // Assign values to the second node
    nextNode->x = 2.1;
    nextNode->y = 9;

    // Link the first node to the second node
    head->p = nextNode;
    head->q = nextNode;

    // Set the next node's pointers to NULL since it's the last node
    nextNode->p = NULL;
    nextNode->q = NULL;

    // Accessing values in the linked list
    printf("First Node: x = %.1f, y = %d\n", head->x, head->y);
    printf("Second Node: x = %.1f, y = %d\n", head->p->x, head->p->y);

    // Free allocated memory
    free(head);
    free(nextNode);

    return 0;
}
