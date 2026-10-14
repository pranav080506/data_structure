/* Experiment: 4d - Deque (Double Ended Queue) | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 6

/* Deque using a fixed-size array with front and rear pointers */
typedef struct {
    int data[SIZE];
    int front;
    int rear;
    int count;
} Deque;

/* Initialize an empty deque */
void initDeque(Deque *dq) {
    dq->front = SIZE / 2;
    dq->rear  = SIZE / 2 - 1;
    dq->count = 0;
}

/* Check if deque is full */
int isFull(Deque *dq) {
    return dq->count == SIZE;
}

/* Check if deque is empty */
int isEmpty(Deque *dq) {
    return dq->count == 0;
}

/* Insert at rear */
void insertRear(Deque *dq, int val) {
    if (isFull(dq)) {
        printf("  Deque full! Cannot insert %d at rear\n", val);
        return;
    }
    dq->rear = (dq->rear + 1) % SIZE;
    dq->data[dq->rear] = val;
    dq->count++;
    printf("  InsertRear: %d\n", val);
}

/* Insert at front */
void insertFront(Deque *dq, int val) {
    if (isFull(dq)) {
        printf("  Deque full! Cannot insert %d at front\n", val);
        return;
    }
    dq->front = (dq->front - 1 + SIZE) % SIZE;
    dq->data[dq->front] = val;
    dq->count++;
    printf("  InsertFront: %d\n", val);
}

/* Delete from front */
int deleteFront(Deque *dq) {
    if (isEmpty(dq)) {
        printf("  Deque Underflow at front!\n");
        return -1;
    }
    int val = dq->data[dq->front];
    dq->front = (dq->front + 1) % SIZE;
    dq->count--;
    printf("  DeleteFront: %d\n", val);
    return val;
}

/* Delete from rear */
int deleteRear(Deque *dq) {
    if (isEmpty(dq)) {
        printf("  Deque Underflow at rear!\n");
        return -1;
    }
    int val = dq->data[dq->rear];
    dq->rear = (dq->rear - 1 + SIZE) % SIZE;
    dq->count--;
    printf("  DeleteRear: %d\n", val);
    return val;
}

/* Display elements from front to rear */
void display(Deque *dq) {
    if (isEmpty(dq)) {
        printf("  Deque is empty.\n");
        return;
    }
    printf("  Deque (front -> rear): ");
    for (int i = 0; i < dq->count; i++) {
        printf("%d ", dq->data[(dq->front + i) % SIZE]);
    }
    printf("\n");
}

int main(void) {
    Deque dq;
    initDeque(&dq);

    printf("===== DOUBLE ENDED QUEUE (DEQUE) =====\n\n");

    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    insertFront(&dq, 1);

    printf("\nAfter insertRear 10,20 and insertFront 5,1:\n");
    display(&dq);

    printf("\nDeleteFront and DeleteRear:\n");
    deleteFront(&dq);
    deleteRear(&dq);

    printf("\nAfter deletions:\n");
    display(&dq);

    return 0;
}
