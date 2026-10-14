/* Experiment: 4a - Queue using Linked List | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node of the linked-list queue */
typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Queue with front and rear pointers */
typedef struct {
    Node *front;
    Node *rear;
} Queue;

/* Initialize an empty queue */
void initQueue(Queue *q) {
    q->front = NULL;
    q->rear  = NULL;
}

/* Check if queue is empty */
int isEmpty(Queue *q) {
    return q->front == NULL;
}

/* Enqueue a value at the rear */
void enqueue(Queue *q, int val) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("  Enqueued: %d\n", val);
}

/* Dequeue a value from the front */
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("  Queue Underflow!\n");
        return -1;
    }
    Node *temp = q->front;
    int val = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) q->rear = NULL;
    free(temp);
    printf("  Dequeued: %d\n", val);
    return val;
}

/* Display queue from front to rear */
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("  Queue is empty.\n");
        return;
    }
    printf("  Queue (front -> rear): ");
    Node *curr = q->front;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

/* Free all nodes in the queue */
void freeQueue(Queue *q) {
    while (!isEmpty(q)) {
        Node *temp = q->front;
        q->front = q->front->next;
        free(temp);
    }
    q->rear = NULL;
}

int main(void) {
    Queue q;
    initQueue(&q);

    printf("===== QUEUE USING LINKED LIST =====\n\n");

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);

    printf("\nAfter enqueue 10, 20, 30, 40:\n");
    display(&q);

    printf("\nDequeue twice:\n");
    dequeue(&q);
    dequeue(&q);

    printf("\nAfter two dequeues:\n");
    display(&q);

    freeQueue(&q);
    return 0;
}
