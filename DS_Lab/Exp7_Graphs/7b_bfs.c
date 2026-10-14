/* Experiment: 7b - BFS (Breadth First Search) | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define V 6

/* Simple integer queue for BFS */
typedef struct {
    int data[V];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) { q->front = 0; q->rear = 0; }
int  isEmpty(Queue *q)   { return q->front == q->rear; }
void enqueue(Queue *q, int val) { q->data[q->rear++] = val; }
int  dequeue(Queue *q)          { return q->data[q->front++]; }

/* BFS from vertex src on given adjacency matrix */
void bfs(int graph[V][V], int src) {
    int visited[V] = {0};
    Queue q;
    initQueue(&q);

    visited[src] = 1;
    enqueue(&q, src);

    printf("  BFS from vertex %d: ", src);
    while (!isEmpty(&q)) {
        int vertex = dequeue(&q);
        printf("%d ", vertex);
        for (int i = 0; i < V; i++) {
            if (graph[vertex][i] != 0 && !visited[i]) {
                visited[i] = 1;
                enqueue(&q, i);
            }
        }
    }
    printf("\n");
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

    printf("===== BREADTH FIRST SEARCH =====\n\n");
    bfs(graph, 0);

    return 0;
}
