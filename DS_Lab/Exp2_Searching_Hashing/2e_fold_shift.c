/* Experiment: 2e - Fold Shift Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

/* Compute fold-shift hash: split key into 3-digit parts and add them */
int foldShift(int key) {
    int sum = 0;
    while (key > 0) {
        sum += key % 1000;
        key /= 1000;
    }
    return sum;
}

int main(void) {
    int keys[] = {123456789, 345678912};
    int n = 2;

    printf("===== FOLD SHIFT HASHING =====\n");
    printf("Splitting key into 3-digit parts and summing\n");
    printf("%-15s %-15s\n", "Key", "Hash Address");
    printf("-------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-15d %-15d\n", keys[i], foldShift(keys[i]));
    }

    return 0;
}
