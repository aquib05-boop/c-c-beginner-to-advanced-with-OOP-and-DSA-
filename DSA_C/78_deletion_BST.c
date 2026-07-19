#include <stdio.h>
#include <stdlib.h>

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

void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct Node* root){
    static struct Node* prev = NULL; //checks only once at the start if prev==null
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else return 1;
}

struct Node* searchIter(struct Node* root, int key){
    while(root!=NULL){
        if(key==root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
       }
    }
    return NULL;
}

void insert(struct Node* root, int key){
    struct Node* prev = NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("Cannot insert %d, already in BST.\n",key);
            return;
        }
        else if(root->data>key){
            root=root->left;
        }
        else root=root->right;
    }
    struct Node* new=createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}
// prev is not a copy of the node —
// it’s an actual pointer to one of the nodes inside your existing tree.


struct Node* inOrderPredecessor(struct Node* root){
    // left subtree->rightmost child
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}


struct Node* deleteNode(struct Node* root, int value){
    struct Node* iPre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }

    // search for the node to be deleted
    if(value<root->data){
        root->left=deleteNode(root->left, value);
    }
    else if(value>root->data){
        root->right=deleteNode(root->right,value);
    }
    // Deletion Strategy
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main(){
    struct Node* p= createNode(5);
    struct Node* p1=createNode(3);
    struct Node* p2=createNode(6);
    struct Node* p3=createNode(1);
    struct Node* p4=createNode(4);
 
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    printf("Before deletion: ");
    inOrder(p);
    printf("\nAfter deletion: ");
    deleteNode(p,4);
    inOrder(p);
    return 0;
}
