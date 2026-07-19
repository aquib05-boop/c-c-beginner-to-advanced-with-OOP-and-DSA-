#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char data;
    struct Node* left;
    struct Node* right;
}Node;

int isOperator(char c){
    if(c=='+' || c=='-' || c== '*' || c=='/' || c=='^')
        return 1;
    else return 0;
}

int presedence(char c){
    if(c== '-' || c=='+') return 1;
    else if(c=='*' || c=='/') return 2;
    else if( c=='^') return 3;
    else return 0;
}

Node* createNode(char c){
    struct Node* ptr = malloc(sizeof(Node));
    ptr->data=c;
    ptr->left=ptr->right=NULL;
    return ptr;
}

typedef struct Stack{
    int top;
    int size;
    char* arr;
}stack;

int isEmpty(stack* k){
    if(k->top == -1) return 1;
    else return 0;
}

int isFull(stack* k){
    if(k->top == k->size-1) return 1;
    else return 0;
}

void push(char c, stack* k){
    if(!isFull){
        k->top++;
        k->arr[k->top] = c;
    }
    else printf("The stack is FULL!\n");
}

char pop(stack* k){
    char c = '\0';
    if(!isEmpty(k)){
        char c = k->arr[k->top];
        k->top--;
    }
    return c;
}

Node* ExpressionTree(char* arr){
    stack* k;
    stack* m;
    k->top=-1;
    k->size=30;
    k->arr[k->size];

    m->top=-1;
    m->size=30;
    m->arr[k->size];

    char z;

    Node* array[30];

    for (int j = 0; j < sizeof(arr); j++)
    {
        for (int i = 0; i < sizeof(arr); i++)
        {
            if(arr[i]==isOperator(arr[i])){
                // push(arr[i], k);
                if(k->top=-1) push(arr[i], k);
    
                else if(presedence(arr[i])>=presedence(k->arr[k->top])){
                    pop(k);
                    push(arr[i], k);
                }
                else continue;
            }
        }
        z = pop(k);
        int l = 0;
        
        while (arr[l]!=k->arr[k->top])
        {
            push(arr[l], m);
            l++;
        }  
    }
}

int main(){

    return 0;
}