/* Experiment: 2h - Direct Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

/* Direct hash: address equals the key itself */
int directHash(int key) {
    return key;
}

int main(void) {
    int keys[] = {101, 103, 105};
    int n = 3;

    printf("===== DIRECT HASHING =====\n");
    printf("Address = Key (direct mapping)\n");
    printf("%-10s %-12s\n", "Key", "Hash Address");
    printf("-----------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-10d %-12d\n", keys[i], directHash(keys[i]));
    }

    return 0;
}
