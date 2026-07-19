#include <stdio.h>
#include <stdlib.h>

struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};

int isOperator(char ch){
    if(ch== '+'||ch== '-'||ch== '*'||ch== '/')
        return 1;
    else return 0;
}

struct Node* createNode(char ch){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data=ch;
    n->left=n->right=NULL;
    return n;
}

struct Stack{
    int top;
    struct Node* arr[50];
};

void push(struct Stack* stack, struct Node* node){
    stack->top++;
    stack->arr[stack->top]=node;
}

struct Node* pop(struct Stack* stack){
    struct Node* p = stack->arr[stack->top];
    stack->top--;
    return p;
}

struct Node* buildExpressionTree(char postfix[]){
    struct Stack* stack=malloc(sizeof(struct Stack));
    stack->top=-1;

    for (int i = 0; postfix[i]!='\0'; i++)
    {
        char c = postfix[i];

        if(!isOperator(c)){
            struct Node* node=createNode(c);
            push(stack,node);
        }
        else{
            struct Node* right = pop(stack);
            struct Node* left = pop(stack);

            struct Node* node=createNode(c);
            node->right=right;
            node->left=left;
            push(stack, node);
        }
    }

    return pop(stack);
}

void inOrder(struct Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    printf("%c", root->data);
    inOrder(root->right);
}

void postOrder(struct Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    printf("%c", root->data);
    postOrder(root->right);
}

void preOrder(struct Node* root){
    if(root==NULL) return;
    printf("%c", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    char postfix[100];
    printf("Enter a postfix expression: ");
    scanf("%s",&postfix);

    struct Node* root=buildExpressionTree(postfix);
    printf("Inorder traversal of expression tree:");
    inOrder(root);

    printf("\nPostOrder traversal: ");
    postOrder(root);
    
    printf("\nPreOrder traversal: ");
    preOrder(root);

    return 0;
}