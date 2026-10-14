/* Experiment: 5c - Doubly Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the doubly linked list */
typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

/* Insert a node at the end */
void insertEnd(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *curr = *head;
    while (curr->next != NULL) curr = curr->next;
    curr->next = newNode;
    newNode->prev = curr;
}

/* Delete first occurrence of data */
void deleteNode(Node **head, int data) {
    Node *curr = *head;
    while (curr != NULL && curr->data != data) curr = curr->next;
    if (curr == NULL) {
        printf("  %d not found!\n", data);
        return;
    }
    if (curr->prev != NULL) curr->prev->next = curr->next;
    else *head = curr->next;
    if (curr->next != NULL) curr->next->prev = curr->prev;
    free(curr);
    printf("  Deleted: %d\n", data);
}

/* Display list in forward direction */
void displayForward(Node *head) {
    printf("  Forward : ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Display list in backward direction */
void displayBackward(Node *head) {
    if (head == NULL) return;
    Node *tail = head;
    while (tail->next != NULL) tail = tail->next;
    printf("  Backward: ");
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

/* Free all nodes */
void freeList(Node **head) {
    while (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main(void) {
    Node *head = NULL;

    printf("===== DOUBLY LINKED LIST =====\n\n");

    insertEnd(&head, 11);
    insertEnd(&head, 22);
    insertEnd(&head, 33);
    insertEnd(&head, 44);

    printf("After inserting 11, 22, 33, 44:\n");
    displayForward(head);
    displayBackward(head);

    printf("\nDelete 22:\n");
    deleteNode(&head, 22);

    printf("\nAfter deletion:\n");
    displayForward(head);
    displayBackward(head);

    freeList(&head);
    return 0;
}
