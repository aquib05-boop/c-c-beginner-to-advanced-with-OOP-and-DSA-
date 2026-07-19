#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isEmpty(struct Node* top){
    if(top==NULL){
        return 1;
    }
    else return 0;
}

int isFull(struct Node* top){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        return 1;
    }
    else return 0;
}

struct Node* push(struct Node* top,int data){
    if(isFull(top)){
        printf("The heap memory is exhausted!\n");
    }
    else{
        struct Node* p = (struct Node*)malloc(sizeof(struct Node));
        p->data = data;
        p->next = top;
        return p;
    }
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow");
    }
    else{
        struct Node* p = *top;
        // p = p->next;
        // int x = top->data;
        // free(top);
        int x = p->data;
        *top = (*top)->next;
        free(p);
        return x;
    }

}

void display(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    struct Node* top = (struct Node*)malloc(sizeof(struct Node));
    top->data = 3;
    top->next = NULL;
    top=push(top,4);
    top=push(top,22);
    top=push(top,7);

    display(top);
    int element = pop(&top);
    printf("Popped element is %d\n", element);
    display(top);
    
    return 0;
}