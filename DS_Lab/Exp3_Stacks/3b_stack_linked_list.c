/* Experiment: 3b - Stack using Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the linked list stack */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Push a value onto the linked-list stack */
void push(Node **top, int val) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = *top;
    *top = newNode;
    printf("  Pushed: %d\n", val);
}

/* Pop a value from the linked-list stack */
int pop(Node **top) {
    if (*top == NULL) {
        printf("  Stack Underflow!\n");
        return -1;
    }
    Node *temp = *top;
    int val = temp->data;
    *top = (*top)->next;
    free(temp);
    printf("  Popped: %d\n", val);
    return val;
}

/* Display all elements from top to bottom */
void display(Node *top) {
    if (top == NULL) {
        printf("  Stack is empty.\n");
        return;
    }
    printf("  Stack (top -> bottom): ");
    Node *curr = top;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

/* Free all nodes in the stack */
void freeStack(Node **top) {
    while (*top != NULL) {
        Node *temp = *top;
        *top = (*top)->next;
        free(temp);
    }
}

int main(void) {
    Node *top = NULL;

    printf("===== STACK USING LINKED LIST =====\n");

    push(&top, 5);
    push(&top, 15);
    push(&top, 25);
    push(&top, 35);

    printf("\nAfter pushing 5, 15, 25, 35:\n");
    display(top);

    printf("\nPopping once:\n");
    pop(&top);

    printf("\nAfter one pop:\n");
    display(top);

    freeStack(&top);
    return 0;
}
