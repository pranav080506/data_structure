/* Experiment: 6c - Min Heap | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define MAX 50

/* Min-heap stored as an array */
typedef struct {
    int data[MAX];
    int size;
} MinHeap;

/* Initialize an empty heap */
void initHeap(MinHeap *h) {
    h->size = 0;
}

/* Swap two integer values */
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

/* Reheap up after inserting at the end */
void reheapUp(MinHeap *h, int idx) {
    while (idx > 0) {
        int parent = (idx - 1) / 2;
        if (h->data[parent] > h->data[idx]) {
            swap(&h->data[parent], &h->data[idx]);
            idx = parent;
        } else {
            break;
        }
    }
}

/* Insert a value into the min heap */
void insert(MinHeap *h, int val) {
    if (h->size == MAX) {
        printf("  Heap is full!\n");
        return;
    }
    h->data[h->size] = val;
    reheapUp(h, h->size);
    h->size++;
    printf("  Inserted: %d\n", val);
}

/* Reheap down after deleting root */
void reheapDown(MinHeap *h, int idx) {
    int n = h->size;
    while (1) {
        int left    = 2 * idx + 1;
        int right   = 2 * idx + 2;
        int smallest = idx;
        if (left  < n && h->data[left]  < h->data[smallest]) smallest = left;
        if (right < n && h->data[right] < h->data[smallest]) smallest = right;
        if (smallest == idx) break;
        swap(&h->data[idx], &h->data[smallest]);
        idx = smallest;
    }
}

/* Delete the root (minimum) from the heap */
int deleteRoot(MinHeap *h) {
    if (h->size == 0) {
        printf("  Heap is empty!\n");
        return -1;
    }
    int root = h->data[0];
    h->data[0] = h->data[--h->size];
    reheapDown(h, 0);
    return root;
}

/* Print the heap array */
void printHeap(MinHeap *h) {
    printf("  Heap: ");
    for (int i = 0; i < h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int main(void) {
    MinHeap h;
    initHeap(&h);

    int values[] = {15, 30, 10, 40, 25, 50};
    int n = 6;

    printf("===== MIN HEAP =====\n\n");

    for (int i = 0; i < n; i++) {
        insert(&h, values[i]);
    }

    printf("\nAfter all insertions:\n");
    printHeap(&h);

    int deleted = deleteRoot(&h);
    printf("\nDeleted root: %d\n", deleted);
    printf("After deletion:\n");
    printHeap(&h);

    return 0;
}
