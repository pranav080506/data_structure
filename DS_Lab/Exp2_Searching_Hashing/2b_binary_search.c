/* Experiment: 2b - Binary Search | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define SIZE 9

/* Search for key using binary search; return index if found, -1 otherwise */
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

/* Print result of a binary search */
void printResult(int arr[], int n, int key) {
    int idx = binarySearch(arr, n, key);
    if (idx != -1) {
        printf("  Search %d -> Found at index %d\n", key, idx);
    } else {
        printf("  Search %d -> Not found\n", key);
    }
}

int main(void) {
    int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("===== BINARY SEARCH =====\n");
    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printResult(arr, SIZE, 80);
    printResult(arr, SIZE, 25);

    return 0;
}
