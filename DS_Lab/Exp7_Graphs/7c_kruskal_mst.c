/* Experiment: 7c - Kruskal's MST | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

#define V  6
#define MAX_EDGES 20

/* Edge in the graph */
typedef struct {
    int src, dest, weight;
} Edge;

/* Union-Find parent and rank arrays */
int parent[V];
int rank_arr[V];

/* Initialize Union-Find sets */
void initSets(void) {
    for (int i = 0; i < V; i++) {
        parent[i] = i;
        rank_arr[i] = 0;
    }
}

/* Find with path compression */
int find(int x) {
    if (parent[x] != x) parent[x] = find(parent[x]);
    return parent[x];
}

/* Union by rank */
void unionSets(int x, int y) {
    int px = find(x), py = find(y);
    if (rank_arr[px] < rank_arr[py]) parent[px] = py;
    else if (rank_arr[px] > rank_arr[py]) parent[py] = px;
    else { parent[py] = px; rank_arr[px]++; }
}

/* Comparator for qsort by edge weight */
int cmpEdge(const void *a, const void *b) {
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
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

    /* Build edge list from upper triangle */
    Edge edges[MAX_EDGES];
    int edgeCount = 0;
    for (int i = 0; i < V; i++) {
        for (int j = i + 1; j < V; j++) {
            if (graph[i][j] != 0) {
                edges[edgeCount].src    = i;
                edges[edgeCount].dest   = j;
                edges[edgeCount].weight = graph[i][j];
                edgeCount++;
            }
        }
    }

    qsort(edges, (size_t)edgeCount, sizeof(Edge), cmpEdge);
    initSets();

    printf("===== KRUSKAL'S MINIMUM SPANNING TREE =====\n\n");
    printf("MST Edges:\n");

    int totalWeight = 0;
    int mstEdges = 0;
    for (int i = 0; i < edgeCount && mstEdges < V - 1; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int w = edges[i].weight;
        if (find(u) != find(v)) {
            unionSets(u, v);
            printf("  Edge (%d - %d)  weight = %d\n", u, v, w);
            totalWeight += w;
            mstEdges++;
        }
    }
    printf("\nTotal MST weight = %d\n", totalWeight);

    return 0;
}
