/* Experiment: 2f - Fold Boundary Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

/* Reverse a 3-digit number */
int reverse3(int num) {
    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;
    return d3 * 100 + d2 * 10 + d1;
}

/* Compute fold-boundary hash for a 9-digit key:
   Reverse first and last 3-digit parts, keep middle, then add */
int foldBoundary(int key) {
    int part3 = key % 1000;           /* last 3 digits  */
    int part2 = (key / 1000) % 1000;  /* middle 3 digits */
    int part1 = key / 1000000;        /* first 3 digits  */

    int rPart1 = reverse3(part1);
    int rPart3 = reverse3(part3);

    return rPart1 + part2 + rPart3;
}

int main(void) {
    int keys[] = {123456789, 345678912};
    int n = 2;

    printf("===== FOLD BOUNDARY HASHING =====\n");
    printf("Reverse first and last parts, keep middle, then add\n");
    printf("%-15s %-15s\n", "Key", "Hash Address");
    printf("-------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-15d %-15d\n", keys[i], foldBoundary(keys[i]));
    }

    return 0;
}
