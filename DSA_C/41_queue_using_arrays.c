#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct queue* q){
    if(q->r == q->size-1) return 1;
    else return 0;
}

int isEmpty(struct queue* q){
    if(q->r == q->f) return 1;
    else return 0;
}

void enqueue(struct queue* q, int val){
    if(!isFull(q)){
        // q->f=0;
        q->r++;
        q->arr[q->r] = val;
    }
    else printf("Queue overflow!\n");
}

int dequeue(struct queue* q){
    int a = -1; //assuming no neg values in the queue
    if(!isEmpty(q)){
        q->f++;
        a = q->arr[q->f];
    }
    else{ 
    printf("Queue is empty\n");
    }
    return a;
}

void display(struct queue q){
    if(!isEmpty(&q)){
    for(int i = q.f+1; i <= q.r; i++){
        printf("%d ",q.arr[i]);
    }
    }
    else printf("QUEUE IS EMPTY!\n");
}

int main(){
    struct queue q;
    q.size = 100;
    q.f=q.r=-1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    enqueue(&q, 15);
    enqueue(&q, 16);
    enqueue(&q, 18);
    enqueue(&q, 17);
    enqueue(&q, 19);
    enqueue(&q, 11);
    dequeue(&q);
    dequeue(&q); 
    display(q);
    return 0;
}