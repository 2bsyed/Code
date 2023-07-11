#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct ListNode** head, int val) {
    struct ListNode* newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct ListNode* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int findLargest(struct ListNode* head) {
    int largest = head->val;
    struct ListNode* current = head->next;
    while (current != NULL) {
        if (current->val > largest) {
            largest = current->val;
        }
        current = current->next;
    }
    return largest;
}

int findSmallest(struct ListNode* head) {
    int smallest = head->val;
    struct ListNode* current = head->next;
    while (current != NULL) {
        if (current->val < smallest) {
            smallest = current->val;
        }
        current = current->next;
    }
    return smallest;
}

int searchElement(struct ListNode* head, int target) {
    struct ListNode* current = head;
    int index = 0;
    while (current != NULL) {
        if (current->val == target) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

int countFrequency(struct ListNode* head, int target) {
    int count = 0;
    struct ListNode* current = head;
    while (current != NULL) {
        if (current->val == target) {
            count++;
        }
        current = current->next;
    }
    return count;
}

void printEvenOdd(struct ListNode* head) {
    printf("Even Numbers: ");
    struct ListNode* current = head;
    while (current != NULL) {
        if (current->val % 2 == 0) {
            printf("%d ", current->val);
        }
        current = current->next;
    }
    printf("\n");

    printf("Odd Numbers: ");
    current = head;
    while (current != NULL) {
        if (current->val % 2 != 0) {
            printf("%d ", current->val);
        }
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    struct ListNode* head = NULL;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        insertNode(&head, val);
    }

    printf("Linked List: ");
    printList(head);

    int largest = findLargest(head);
    int smallest = findSmallest(head);
    
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int searchIndex = searchElement(head, target);
    if (searchIndex != -1) {
        printf("Element %d found at index %d\n", target, searchIndex);
    } else {
        printf("Element %d not found in the list\n", target);
    }

    int frequencyTarget;
    printf("Enter the element to count its frequency: ");
    scanf("%d", &frequencyTarget);
    int frequencyCount = countFrequency(head, frequencyTarget);
    printf("Frequency of %d: %d\n", frequencyTarget, frequencyCount);

    printf("Printing even and odd numbers:\n");
    printEvenOdd(head);

    return 0;
}
