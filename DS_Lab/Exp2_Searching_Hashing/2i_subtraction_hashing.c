/* Experiment: 2i - Subtraction Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define BASE 100

/* Subtraction hash: address = key - BASE */
int subtractionHash(int key) {
    return key - BASE;
}

int main(void) {
    int keys[] = {101, 103, 105};
    int n = 3;

    printf("===== SUBTRACTION HASHING =====\n");
    printf("Address = Key - %d\n", BASE);
    printf("%-10s %-12s\n", "Key", "Hash Address");
    printf("-----------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-12d\n", keys[i], subtractionHash(keys[i]));
    }

    return 0;
}
