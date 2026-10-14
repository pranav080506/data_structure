/* Experiment: 4b - Circular Queue | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 5

/* Circular queue using a fixed-size array */
typedef struct {
    int data[SIZE];
    int front;
    int rear;
    int count;
} CircularQueue;

/* Initialize an empty circular queue */
void initQueue(CircularQueue *q) {
    q->front = 0;
    q->rear  = -1;
    q->count = 0;
}

/* Check if the queue is full */
int isFull(CircularQueue *q) {
    return q->count == SIZE;
}

/* Check if the queue is empty */
int isEmpty(CircularQueue *q) {
    return q->count == 0;
}

/* Enqueue a value at the rear */
void enqueue(CircularQueue *q, int val) {
    if (isFull(q)) {
        printf("  Queue Overflow! Cannot enqueue %d\n", val);
        return;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->data[q->rear] = val;
    q->count++;
    printf("  Enqueued: %d\n", val);
}

/* Dequeue a value from the front */
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("  Queue Underflow!\n");
        return -1;
    }
    int val = q->data[q->front];
    q->front = (q->front + 1) % SIZE;
    q->count--;
    printf("  Dequeued: %d\n", val);
    return val;
}

/* Display queue elements from front to rear */
void display(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("  Queue is empty.\n");
        return;
    }
    printf("  Queue (front -> rear): ");
    for (int i = 0; i < q->count; i++) {
        printf("%d ", q->data[(q->front + i) % SIZE]);
    }
    printf("\n");
}

int main(void) {
    CircularQueue q;
    initQueue(&q);

    printf("===== CIRCULAR QUEUE =====\n\n");

    for (int i = 1; i <= 5; i++) {
        enqueue(&q, i);
    }
    enqueue(&q, 6);  /* overflow */

    printf("\nAfter enqueue 1-5 (and attempting 6):\n");
    display(&q);

    printf("\nDequeue twice:\n");
    dequeue(&q);
    dequeue(&q);

    printf("\nEnqueue 7 and 8:\n");
    enqueue(&q, 7);
    enqueue(&q, 8);

    printf("\nFinal queue:\n");
    display(&q);

    return 0;
}
