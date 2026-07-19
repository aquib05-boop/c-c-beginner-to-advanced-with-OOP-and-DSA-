#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DFS(int adj[20][20], int visit[20], int nodes, int start){
    printf("%d", start);
    visit[start] = 1;

    for (int j = 0; j < nodes; j++)
    {
        if(adj[start][j]==1 && visit[j]==0){
            DFS(adj, visit, nodes, j);
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