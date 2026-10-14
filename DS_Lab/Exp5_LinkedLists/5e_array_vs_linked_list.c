/* Experiment: 5e - Array vs Linked List Comparison | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

/* Print a comparison table of Array vs Linked List */
void printComparisonTable(void) {
    printf("%-22s %-28s %-28s\n",
           "Feature", "Array", "Linked List");
    printf("%-22s %-28s %-28s\n",
           "----------------------",
           "----------------------------",
           "----------------------------");
    printf("%-22s %-28s %-28s\n",
           "Memory Allocation",
           "Contiguous (static)",
           "Non-contiguous (dynamic)");
    printf("%-22s %-28s %-28s\n",
           "Size",
           "Fixed at compile time",
           "Grows/shrinks at runtime");
    printf("%-22s %-28s %-28s\n",
           "Access",
           "Random O(1)",
           "Sequential O(n)");
    printf("%-22s %-28s %-28s\n",
           "Insertion/Deletion",
           "O(n) – shifting needed",
           "O(1) – pointer update");
    printf("%-22s %-28s %-28s\n",
           "Extra Memory",
           "None",
           "Pointer per node");
    printf("%-22s %-28s %-28s\n",
           "Cache Performance",
           "Excellent (locality)",
           "Poor (scattered nodes)");
    printf("%-22s %-28s %-28s\n",
           "Overflow Handling",
           "Requires reallocation",
           "Natural – malloc new node");
}

int main(void) {
    printf("===== ARRAY VS LINKED LIST =====\n\n");
    printComparisonTable();
    printf("\nConclusion:\n");
    printf("  - Use Arrays when size is known, random access is needed.\n");
    printf("  - Use Linked Lists when size is dynamic, "
           "frequent insert/delete.\n");
    return 0;
}
