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

int pop(struct Node* top){
    if(isEmpty(top)){
        printf("Stack Underflow");
    }
    else{
        struct Node* p = top;
        p = p->next;
        int x = top->data;
        free(top);
        // int x = p->data;
        // top = top->next;
        // free(p);
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
    struct Node* tp = (struct Node*)malloc(sizeof(struct Node));
    tp->data = 3;
    tp->next = NULL;
    tp=push(tp,4);
    tp=push(tp,22);
    tp=push(tp,7);

    display(tp);
    int element = pop(tp);
    printf("Popped element is %d\n", element);
    // display(tp);
    return 0;
}
// DISPLAY FUNCTION NOT WORKING PROPERLY DUE TO ABSENCE OF DOUBLE POINTER IN POP FUNCTION
// WE CAN MAKE IT ACCESSIBLE BY USING DOUBLE POINTER IN POP FUNCTION
// OR BY USING IT AS A GLOBAL VARIABLE

/*struct Node* top = NULL; // global

void push(int data) {
    // ...existing code...
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = top;
    top = p;
}

int pop() {
    // ...existing code...
    if (top == NULL) { printf("Stack Underflow\n"); return -1; }
    struct Node* p = top;
    int x = top->data;
    top = top->next;
    free(p);
    return x;
}

void display() {
    struct Node* ptr = top;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    top = (struct Node*)malloc(sizeof(struct Node));
    top->data = 3;
    top->next = NULL;
    push(4);
    push(22);
    push(7);

    display();
    int element = pop();
    printf("Popped element is %d\n", element);
    display();
    return 0;
}*/