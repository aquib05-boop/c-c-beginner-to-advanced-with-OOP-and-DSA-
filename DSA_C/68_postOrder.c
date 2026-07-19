#include <stdio.h>
#include <malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* n; //creating a node pointer
    n = (struct Node*)malloc(sizeof(struct Node)); //allocating memory in the heap
    n->data=data;
    n->left = NULL;
    n->right = NULL;
    return n; //finally returning the created node
}

void postOrder(struct Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = 4;
    struct Node* p1=createNode(1);
    struct Node* p2=createNode(6);
    struct Node* p3=createNode(5);
    struct Node* p4=createNode(2);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    postOrder(p);
    return 0;
}