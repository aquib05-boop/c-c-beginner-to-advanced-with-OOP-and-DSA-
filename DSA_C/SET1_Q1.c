#include <stdio.h>
#include <string.h>

struct stack{
    int size;
    int top;
    int *arr; //It helps to dynamically allocate the memory of array
};

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else return 0;
}
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else return 0;
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
    if(isEmpty(ptr)){
        printf("Stack Underflow!\n");
    }
    else{
        int val =ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void display(struct stack* ptr){
    for (int i = 0; i < ptr->size; i++)
    {
        printf("%d ",ptr->arr[i]);
    }
    printf("\n");
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp){
    return sp->arr[0];
}

void nextGreatestEle(int* arr, int size){
    struct stack* sp1=(struct stack*)malloc(sizeof(struct stack));
    struct stack* sp2=(struct stack*)malloc(sizeof(struct stack));
    sp1->size=sp2->size=size;
    for(int i=size-1;i>=0;i--){
        push(sp1,arr[i]);
    }
    for(int i=0;i<size;i++){
        sp2=sp1;
        while(!isEmpty(sp2)){
            int cnt=0;
            int popp=pop(sp2);
            if(popp > arr[i]){
                arr[i]=popp;
                break;
            }
            cnt++;
            if(cnt==4) arr[i]=-1;
        }
    }
}

int main(){
    int arr[] = {2, 5, 6, 1, 0};
    int size = sizeof(arr)/sizeof(int);
    
    nextGreatestElement(arr, size);
    return 0;
}