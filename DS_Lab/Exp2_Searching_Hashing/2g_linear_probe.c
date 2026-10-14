/* Experiment: 2g - Linear Probing | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define TABLE_SIZE 10
#define EMPTY -1

/* Insert a key into the hash table using linear probing */
void insert(int table[], int key) {
    int addr = key % TABLE_SIZE;
    if (table[addr] == EMPTY) {
        table[addr] = key;
        printf("  Insert %d -> address %d\n", key, addr);
    } else {
        printf("  Insert %d -> address %d occupied", key, addr);
        int probe = (addr + 1) % TABLE_SIZE;
        while (probe != addr && table[probe] != EMPTY) {
            probe = (probe + 1) % TABLE_SIZE;
        }
        if (table[probe] == EMPTY) {
            table[probe] = key;
            printf(", collision! Placed at %d\n", probe);
        } else {
            printf(", table full!\n");
        }
    }
}

/* Print the entire hash table */
void printTable(int table[]) {
    printf("\n  Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] != EMPTY) {
            printf("  [%d] = %d\n", i, table[i]);
        } else {
            printf("  [%d] = ---\n", i);
        }
    }
}

int main(void) {
    int table[TABLE_SIZE];
    int keys[] = {23, 43, 13, 27, 33, 55};
    int n = 6;

    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = EMPTY;
    }

    printf("===== LINEAR PROBING =====\n");
    printf("Table size: %d\n", TABLE_SIZE);
    printf("Keys to insert: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", keys[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++) {
        insert(table, keys[i]);
    }

    printTable(table);

    return 0;
}
