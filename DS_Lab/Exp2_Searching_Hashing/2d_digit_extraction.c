/* Experiment: 2d - Digit Extraction Hashing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

/* Extract digits at positions 1, 3, 5 (1-indexed left to right) from a 6-digit key */
int digitExtraction(int key) {
    /* Convert to digit array: digits[0] = leftmost */
    int digits[6];
    int temp = key;
    for (int i = 5; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }
    /* Extract 1st (index 0), 3rd (index 2), 5th (index 4) digits */
    int result = digits[0] * 100 + digits[2] * 10 + digits[4];
    return result;
}

int main(void) {
    int keys[] = {379452, 123456, 984321};
    int n = 3;

    printf("===== DIGIT EXTRACTION HASHING =====\n");
    printf("Extracting digits at positions 1, 3, 5 (left to right)\n");
    printf("%-12s %-12s\n", "Key", "Hash Address");
    printf("---------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-12d %-12d\n", keys[i], digitExtraction(keys[i]));
    }

    return 0;
}
