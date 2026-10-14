/* Experiment: 1c - Selection Sort | Name: Pranav Gupta | Roll No: 2501921520279
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

/* Sort array using selection sort algorithm */
void selectionSort(int arr[], int n) {
    int minIdx, temp;
    for (int i = 0; i < n - 1; i++) {
        minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(void) {
    int arr[SIZE] = {64, 25, 12, 22, 11, 90, 45, 3, 78, 56};

    printf("===== SELECTION SORT =====\n");
    printf("Before sorting: ");
    printArray(arr, SIZE);

    selectionSort(arr, SIZE);

    printf("After sorting : ");
    printArray(arr, SIZE);

    return 0;
}
