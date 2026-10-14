/* Experiment: 2c - Modulo Division Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define TABLE_SIZE 10

/* Compute hash using modulo division */
int moduloHash(int key, int tableSize) {
    return key % tableSize;
}

int main(void) {
    int keys[] = {1234, 5678, 905, 47};
    int n = 4;

    printf("===== MODULO DIVISION HASHING =====\n");
    printf("Table size: %d\n", TABLE_SIZE);
    printf("%-10s %-10s\n", "Key", "Hash Address");
    printf("-----------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-10d\n", keys[i], moduloHash(keys[i], TABLE_SIZE));
    }

    return 0;
}
