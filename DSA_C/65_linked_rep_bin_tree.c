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

int main(){
    // creating node using function
    struct Node* p = createNode(1);
    struct Node* p1 = createNode(2);
    struct Node* p2 = createNode(3);

    // // Constructing the root node
    // struct Node* p;
    // p = (struct Node*)malloc(sizeof(struct Node));
    // p->left = NULL;
    // p->right = NULL;
    
    // // Constructing the 3rd node
    // struct Node* p1;
    // p1 = (struct Node*)malloc(sizeof(struct Node));
    // p1->left = NULL;
    // p1->right = NULL;
    
    // // Constructing the 2nd node
    // struct Node* p2;
    // p2 = (struct Node*)malloc(sizeof(struct Node));
    // p2->left = NULL;
    // p2->right = NULL;

    p->left=p1;
    p->right=p2;
    return 0;
}