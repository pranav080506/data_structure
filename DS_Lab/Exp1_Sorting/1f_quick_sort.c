/* Experiment: 1f - Quick Sort | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 10

/* Print all elements of the array */
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Partition the array around a pivot, return pivot index */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int temp;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

/* Recursively sort subarrays using quick sort */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void) {
    int arr[SIZE] = {64, 25, 12, 22, 11, 90, 45, 3, 78, 56};

    printf("===== QUICK SORT =====\n");
    printf("Before sorting: ");
    printArray(arr, SIZE);

    quickSort(arr, 0, SIZE - 1);

    printf("After sorting : ");
    printArray(arr, SIZE);

    return 0;
}
