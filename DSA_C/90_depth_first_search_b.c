#include <stdio.h>
#include <stdlib.h>

void DFS(int adj[20][20], int visited[20], int nodes, int i) {
    printf("%d ", i);
    visited[i] = 1;

    for (int j = 0; j < nodes; j++) {
        if (adj[i][j] == 1 && visited[j] == 0) {
            DFS(adj, visited, nodes, j);
        }
    }
}

int main(){
    int nodes, start, adj[20][20];
    int visited[20]={0};

    printf("Enter the number of nodes: ");
    scanf("%d",&nodes);

    printf("Enter the (%d x %d) Adjacecny matrix: \n",nodes, nodes);
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            scanf("%d",&adj[i][j]);
        }
        
    }

    printf("Enter a starting edge(0 to %d): ",nodes);
    scanf("%d",&start);

    printf("DFS traversal: ");
    DFS(adj, visited, nodes, start);

    return 0;
}