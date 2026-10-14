/* Experiment: 1a - Bubble Sort | Name: Pranav Gupta | Roll No: 2501921520279
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

/* Sort array using bubble sort algorithm */
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[SIZE] = {64, 25, 12, 22, 11, 90, 45, 3, 78, 56};

    printf("===== BUBBLE SORT =====\n");
    printf("Before sorting: ");
    printArray(arr, SIZE);

    bubbleSort(arr, SIZE);

    printf("After sorting : ");
    printArray(arr, SIZE);

    return 0;
}
