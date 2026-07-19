#include <stdio.h>
#include <stdlib.h>

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

int main(){
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size*sizeof(int));
    printf("Stack has been created successfully.\n");

    push(sp,18);
    push(sp,19);
    push(sp,125);
    push(sp,11);
    push(sp,15);
    push(sp,132);
    push(sp,12);
    push(sp,2);
    push(sp,43);
    push(sp,42);
    push(sp,29);
    printf("Stack after pushing elements\n");
    
    display(sp);
    pop(sp);
    printf("Stack after popping %d \n",sp->arr[sp->top]);
    display(sp);
    return 0;
}