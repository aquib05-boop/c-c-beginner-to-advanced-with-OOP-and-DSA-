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

struct Node* search(struct Node* root, int key){
    if(root==NULL) return NULL;
    if(root->data==key) return root;
    else if(key<root->data) return search(root->left, key);
    else return search(root->right, key);
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

    struct Node* n = search(p,6);
    if(n!=NULL){
        printf("Found element: %d",n->data);
    }
    else printf("Element not found.\n");
    
    return 0;
}

// inOrder(p);
// printf("\n");
// if(isBST(p)){
//     printf("The above tree is a BST!\n");
// };