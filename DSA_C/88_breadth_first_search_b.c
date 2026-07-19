#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct queue* q){
    if(q->r==q->size-1) return 1;
    else return 0;
}

int isEmpty(struct queue* q){
    if(q->r==q->f) return 1;
    else return 0;
}

void enqueue(struct queue* q, int val){
    if(!isFull(q)){
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue* q){
    int a = -1;
    if(!isEmpty(q)){
        a = q->arr[q->f];
        q->f++;
    }
    return a;
}

void BFS(int adj[20][20], int nodes, int start){
    struct queue* q=malloc(sizeof(struct queue));
    q->size=100;
    q->f=q->r=0;
    q->arr=(int*)malloc(q->size * sizeof(int));

    int visited[20] = {0};

    printf("BFS traversal: ");
    visited[start]=1;
    enqueue(q, start);
    printf("%d ", start);
    while(!isEmpty(q)){
        int node = dequeue(q);
        for (int j = 0; j < 20; j++)
        {
            if(adj[node][j]==1 && visited[j]==0){
                printf("%d ", j);
                visited[j]=1;
                enqueue(q, j);
            }
        }   
    }
    printf("\n");
    free(q->arr);
}

int main(){
    int n, start;
    int adj[20][20];

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

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
    BFS(adj,n, start);
    return 0;
}