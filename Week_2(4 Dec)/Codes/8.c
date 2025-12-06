#include <stdio.h>

void DFS(int graph[][4], int visited[], int node) {
    visited[node] = 1;
    printf("%d ", node);

    for(int i = 0; i < 4; i++) {
        if(graph[node][i] == 1 && !visited[i])
            DFS(graph, visited, i);
    }
}

int main() {
    int graph[4][4] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,0}
    };

    int visited[4] = {0};
    DFS(graph, visited, 0);

    return 0;
}
