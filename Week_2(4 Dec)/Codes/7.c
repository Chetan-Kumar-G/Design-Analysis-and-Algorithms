#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = 0, rear = 0;

void enqueue(int x) {
    queue[rear++] = x;
}

int dequeue() {
    return queue[front++];
}

void BFS(int graph[][MAX], int visited[], int n, int start) {
    enqueue(start);
    visited[start] = 1;

    while(front != rear) {
        int node = dequeue();
        printf("%d ", node);

        for(int i = 0; i < n; i++) {
            if(graph[node][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

int main() {
    int graph[MAX][MAX] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,0}
    };

    int visited[MAX] = {0};
    BFS(graph, visited, 4, 0);

    return 0;
}

