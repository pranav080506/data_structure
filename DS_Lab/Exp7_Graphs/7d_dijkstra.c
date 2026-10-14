/* Experiment: 7d - Dijkstra's Shortest Path | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define V   6
#define INF 99999

/* Find the unvisited vertex with minimum distance */
int minDistance(int dist[], int visited[]) {
    int min = INF, minIdx = -1;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIdx = v;
        }
    }
    return minIdx;
}

/* Run Dijkstra's algorithm from src vertex */
void dijkstra(int graph[V][V], int src) {
    int dist[V];
    int visited[V];
    int prev[V];

    for (int i = 0; i < V; i++) {
        dist[i]    = INF;
        visited[i] = 0;
        prev[i]    = -1;
    }
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        if (u == -1) break;
        visited[u] = 1;
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                prev[v] = u;
            }
        }
    }

    printf("  Source vertex: %d\n\n", src);
    printf("  %-10s %-10s %-15s\n", "Vertex", "Distance", "Path");
    printf("  %-10s %-10s %-15s\n", "------", "--------", "----");

    for (int i = 0; i < V; i++) {
        /* Build path by backtracking through prev[] */
        int path[V], pLen = 0, cur = i;
        while (cur != -1) {
            path[pLen++] = cur;
            cur = prev[cur];
        }
        printf("  %-10d %-10d ", i, dist[i]);
        for (int j = pLen - 1; j >= 0; j--) {
            printf("%d", path[j]);
            if (j > 0) printf("->");
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

    printf("===== DIJKSTRA'S SHORTEST PATH =====\n\n");
    dijkstra(graph, 0);

    return 0;
}
