/* Experiment: 1d - Shell Sort | Name: Pranav Gupta | Roll No: 2501921520279
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

/* Sort array using shell sort algorithm */
void shellSort(int arr[], int n) {
    int gap, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            temp = arr[i];
            j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

int main(void) {
    int arr[SIZE] = {64, 25, 12, 22, 11, 90, 45, 3, 78, 56};

    printf("===== SHELL SORT =====\n");
    printf("Before sorting: ");
    printArray(arr, SIZE);

    shellSort(arr, SIZE);

    printf("After sorting : ");
    printArray(arr, SIZE);

    return 0;
}
