/* Experiment: 6e - Heapsort | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 8

/* Print all elements of the array */
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Swap two integers */
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

/* Heapify subtree rooted at idx in array of size n (max-heap) */
void heapify(int arr[], int n, int idx) {
    int largest = idx;
    int left    = 2 * idx + 1;
    int right   = 2 * idx + 2;
    if (left  < n && arr[left]  > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;
    if (largest != idx) {
        swap(&arr[idx], &arr[largest]);
        heapify(arr, n, largest);
    }
}

/* Sort array using heap sort */
void heapSort(int arr[], int n) {
    /* Build max heap */
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    /* Extract elements one by one */
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main(void) {
    int arr[SIZE] = {12, 11, 13, 5, 6, 7, 1, 9};

    printf("===== HEAPSORT =====\n");
    printf("Before sorting: ");
    printArray(arr, SIZE);

    heapSort(arr, SIZE);

    printf("After sorting : ");
    printArray(arr, SIZE);

    return 0;
}
