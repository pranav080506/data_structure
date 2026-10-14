/* Experiment: 2a - Linear Search | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 9

/* Search for key in arr; return index if found, -1 otherwise */
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

/* Print result of a linear search */
void printResult(int arr[], int n, int key) {
    int idx = linearSearch(arr, n, key);
    if (idx != -1) {
        printf("  Search %d -> Found at index %d\n", key, idx);
    } else {
        printf("  Search %d -> Not found\n", key);
    }
}

int main(void) {
    int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("===== LINEAR SEARCH =====\n");
    printf("Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printResult(arr, SIZE, 60);
    printResult(arr, SIZE, 55);

    return 0;
}
