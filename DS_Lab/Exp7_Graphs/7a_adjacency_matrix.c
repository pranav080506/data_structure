/* Experiment: 7a - Adjacency Matrix | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define V 6

/* Print the adjacency matrix of the weighted graph */
void printMatrix(int graph[V][V]) {
    printf("  Vertices: 0 to %d\n\n", V - 1);
    printf("     ");
    for (int i = 0; i < V; i++) printf("%3d", i);
    printf("\n");
    printf("     ");
    for (int i = 0; i < V; i++) printf("---");
    printf("\n");
    for (int i = 0; i < V; i++) {
        printf("  %d |", i);
        for (int j = 0; j < V; j++) {
            printf("%3d", graph[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 2},
        {4, 0, 6, 0, 0, 3},
        {0, 6, 0, 3, 0, 1},
        {0, 0, 3, 0, 2, 0},
        {0, 0, 0, 2, 0, 5},
        {2, 3, 1, 0, 5, 0}
    };

    printf("===== ADJACENCY MATRIX =====\n\n");
    printf("Weighted undirected graph with %d vertices\n\n", V);
    printMatrix(graph);

    return 0;
}
