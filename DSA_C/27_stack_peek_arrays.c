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
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("%d ",ptr->arr[i]);
    }
    printf("\n");
}

// indexing starts from zero from the bottom(as in arrays)
// position starts from top(as in case of human perspective(picking out elements from box))
   //starting form 1   
int peek(struct stack* sp, int i){
    if(sp->top-i+1<0){
        printf("Not a valid position!\n");
        return -1;
    }
    else{
        printf("The value of the element at position %d at index %d is %d",i, sp->top-i+1,sp->arr[sp->top-i+1]);
        return sp->arr[sp->top-i+1];
    }
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
    push(sp,99);
    // push(sp,29);
    printf("Stack after pushing elements\n");
    display(sp);
    pop(sp);
    printf("Stack after popping %d \n",sp->arr[sp->top+1]);
    display(sp);
    peek(sp,7);
    // printf("The value at index %d at postition %d is %d ",sp->top-i+1, peek(sp,8));
    return 0;
}