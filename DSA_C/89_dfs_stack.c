#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1)
     return 1;
    else
     return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1)
     return 1;
    else
     return 0;
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack.\n",val);
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr){
    int val = -1;
    if(isEmpty(ptr)){
        printf("Stack Underflow!\n");
    }
    else{
        val =ptr->arr[ptr->top];
        ptr->top--;
    }
    return val;
}

void DFS(int adj[20][20],int nodes, int start){
    int visited[20] = {0};
    struct stack *sp = malloc(sizeof(struct stack));
    sp->size = 100;
    sp->arr = (int*)malloc(sp->size * sizeof(int));
    sp->top = -1;

    push(sp, start);
    printf("%d ", start);
    visited[start] = 1;
    while(!isEmpty(sp)){
        int node = pop(sp);
        for(int k =0; k< nodes; k++){
            if(adj[node][k] == 1 && visited[k]==0){
                printf("%d ", k);
                visited[k] = 1;
                push(sp, k);
            }
        }
    }
    free(sp->arr);
}

int main(){
    int nodes, start, adj[20][20];

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

    printf("Enter a starting node(0 to %d): ",nodes);
    scanf("%d",&start);

    printf("DFS traversal: ");
    DFS(adj, nodes, start);
    return 0;
}