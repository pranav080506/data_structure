/* Experiment: 5a - Singly Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the singly linked list */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Create a new node with given data */
Node *createNode(int data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}

/* Insert a node at the end of the list */
void insertEnd(Node **head, int data) {
    Node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *curr = *head;
    while (curr->next != NULL) curr = curr->next;
    curr->next = newNode;
}

/* Insert a node at the beginning */
void insertBeginning(Node **head, int data) {
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

/* Delete first occurrence of data */
void deleteNode(Node **head, int data) {
    if (*head == NULL) return;
    Node *temp = *head;
    if (temp->data == data) {
        *head = temp->next;
        free(temp);
        printf("  Deleted: %d\n", data);
        return;
    }
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("  %d not found!\n", data);
        return;
    }
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    printf("  Deleted: %d\n", data);
}

/* Search for data and return 1 if found, 0 otherwise */
int search(Node *head, int data) {
    Node *curr = head;
    int pos = 0;
    while (curr != NULL) {
        if (curr->data == data) {
            printf("  Search %d -> Found at position %d\n", data, pos);
            return 1;
        }
        curr = curr->next;
        pos++;
    }
    printf("  Search %d -> Not found\n", data);
    return 0;
}

/* Count number of nodes */
int countNodes(Node *head) {
    int c = 0;
    while (head != NULL) { c++; head = head->next; }
    return c;
}

/* Reverse the linked list in-place */
void reverse(Node **head) {
    Node *prev = NULL, *curr = *head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

/* Display all nodes */
void display(Node *head) {
    printf("  List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
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

    printf("===== SINGLY LINKED LIST =====\n\n");

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertBeginning(&head, 5);

    printf("After inserting 10,20,30 at end and 5 at beginning:\n");
    display(head);
    printf("  Node count: %d\n", countNodes(head));

    printf("\nSearch operations:\n");
    search(head, 20);
    search(head, 99);

    printf("\nDelete 10:\n");
    deleteNode(&head, 10);
    display(head);

    printf("\nReverse the list:\n");
    reverse(&head);
    display(head);

    freeList(&head);
    return 0;
}
