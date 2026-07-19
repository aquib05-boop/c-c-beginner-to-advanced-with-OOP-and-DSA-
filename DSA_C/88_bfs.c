#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue{
    int size;
    int f;
    int r;
    int* arr;
}que;

int isEmpty(que* q){
    if(q->f==q->r) return 1;
    return 0;
}

int isFull(que* q){
    if(q->r==q->size-1) return 1;
    else return 0;
}

que* enqueue(que* q, int data){
    if(!isFull(q)){
        q->r++;
        q->arr[q->r]=data;
    }
    return q;
}

int dequeue(que* q){
    if(!isEmpty(q)){
        q->f++;
        int data = q->arr[q->f];
        return data;   
    }
    return -1;
}

void BFS(int adj[20][20], int nodes, int start){
    que* q = malloc(sizeof(que));
    q->f=q->r=0;
    q->size = nodes;
    q->arr = (int*)malloc(q->size * sizeof(int));

    int visited[20] = {0};

    printf("BFS traversal: ");
    visited[start]=1;
    enqueue(q, start);
    printf("%d ", start);
    while(!isEmpty(q)){
        int node = dequeue(q);
        if(node<0) return;
        for (int j = 0; j < nodes; j++)
        {
            if(adj[node][j]==1 && visited[j]==0){
                printf("%d ", j);
                visited[j]=1;
                enqueue(q,j);
            }
        }
    }
    free(q->arr);
    free(q);
}

int main(){
    int n, start;
    int adj[20][20];

    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    if(n < 1 || n > 20){
        printf("Invalid number of nodes (1-20).\n");
        return 1;
    }

    printf("Enter adjacency matrix (%d x %d) \n",n ,n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    
    printf("Enter the starting node (0-%d): ", n-1);
    scanf("%d",&start);
    if(start < 0 || start >= n){
        printf("Invalid starting node.\n");
        return 1;
    }
    BFS(adj,n, start);
    return 0;
}