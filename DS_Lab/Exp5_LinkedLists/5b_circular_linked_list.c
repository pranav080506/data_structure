/* Experiment: 5b - Circular Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the circular linked list */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Insert a node at the end (before head) of circular list */
void insert(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
    } else {
        Node *tail = *head;
        while (tail->next != *head) tail = tail->next;
        tail->next = newNode;
        newNode->next = *head;
    }
    printf("  Inserted: %d\n", data);
}

/* Delete the first node (head) from circular list */
void deleteFirst(Node **head) {
    if (*head == NULL) {
        printf("  List is empty!\n");
        return;
    }
    Node *tail = *head;
    while (tail->next != *head) tail = tail->next;

    Node *toDelete = *head;
    printf("  Deleted first: %d\n", toDelete->data);

    if (*head == tail) {  /* only one node */
        *head = NULL;
    } else {
        tail->next = (*head)->next;
        *head = (*head)->next;
    }
    free(toDelete);
}

/* Display circular list starting from head */
void display(Node *head) {
    if (head == NULL) {
        printf("  List is empty.\n");
        return;
    }
    printf("  Circular List: ");
    Node *curr = head;
    do {
        printf("%d ", curr->data);
        curr = curr->next;
    } while (curr != head);
    printf("(back to %d)\n", head->data);
}

/* Free all nodes in circular list */
void freeList(Node **head) {
    if (*head == NULL) return;
    Node *curr = (*head)->next;
    while (curr != *head) {
        Node *temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(*head);
    *head = NULL;
}

int main(void) {
    Node *head = NULL;

    printf("===== CIRCULAR LINKED LIST =====\n\n");

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    printf("\nAfter inserting 1, 2, 3, 4:\n");
    display(head);

    printf("\nDelete first node:\n");
    deleteFirst(&head);

    printf("\nAfter deleting first:\n");
    display(head);

    freeList(&head);
    return 0;
}
