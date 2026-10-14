/* Experiment: 4c - Priority Queue using Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the priority queue (lower priority number = higher priority) */
typedef struct Node {
    int data;
    int priority;
    struct Node *next;
} Node;

/* Insert into priority queue (sorted by ascending priority number) */
void insert(Node **head, int data, int priority) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    /* Insert at front if empty or higher priority than head */
    if (*head == NULL || priority < (*head)->priority) {
        newNode->next = *head;
        *head = newNode;
    } else {
        Node *curr = *head;
        while (curr->next != NULL && curr->next->priority <= priority) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
    printf("  Inserted: data=%d, priority=p%d\n", data, priority);
}

/* Delete the highest priority node (smallest priority number) */
void deleteHighest(Node **head) {
    if (*head == NULL) {
        printf("  Priority queue is empty!\n");
        return;
    }
    Node *temp = *head;
    printf("  Deleted : data=%d, priority=p%d\n", temp->data, temp->priority);
    *head = (*head)->next;
    free(temp);
}

/* Display all elements of the priority queue */
void display(Node *head) {
    if (head == NULL) {
        printf("  Priority queue is empty.\n");
        return;
    }
    printf("  Priority Queue: ");
    while (head != NULL) {
        printf("[%d,p%d] ", head->data, head->priority);
        head = head->next;
    }
    printf("\n");
}

/* Free all nodes */
void freeQueue(Node **head) {
    while (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main(void) {
    Node *head = NULL;

    printf("===== PRIORITY QUEUE (LINKED LIST) =====\n\n");

    insert(&head, 100, 3);
    insert(&head, 200, 1);
    insert(&head, 300, 4);
    insert(&head, 400, 2);

    printf("\nAfter inserting all elements:\n");
    display(head);

    printf("\nDeleting two elements:\n");
    deleteHighest(&head);
    deleteHighest(&head);

    printf("\nRemaining queue:\n");
    display(head);

    freeQueue(&head);
    return 0;
}
