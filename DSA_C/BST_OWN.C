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

struct Node* search(struct Node* root, int key){
    if(root==NULL) return NULL;
    if(root->data==key) return root;
    else if(root->data<key) return search(root->right, key);
    else return search(root->left, key);
}

// In each recursion step, the assignment is made.
// Calling return link(root->left, next), always returns next to the top;
// so vice versa to the case of searching where we only need NUll or root,
// here we also want our root node to be updated!

struct Node* link(struct Node* root, struct Node* next){
    if (root == NULL)
        return next;
    if (next->data < root->data)
        root->left = link(root->left, next);
    else if (next->data > root->data)
        root->right = link(root->right, next);
    return root;
}

// void link(struct Node** r, struct Node* next){
//     struct Node** root = r;
//     struct Node** temp = r;

//     if((*root)!=NULL){
//         if((*root)->data>next->data) link((*root)->left,next);
//         if((*root)->data<next->data) link((*root)->right,next);
//     }
//     while((*temp)->right!=root || (*temp)->left!=root){
//         if((*root)->data>next->data) (*root)->left = next;
//         else (*root)->right = next;
//     }
// }

void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main(){
    int val, n;
    printf("Enter the number of n: ");
    scanf("%d", &n);
    struct Node** arr=(struct Node**)malloc(n*(sizeof(struct Node*)));
    struct Node* root=NULL;

    printf("Enter the values of the BST: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&val);
        arr[i]=createNode(val);
        root=link(root, arr[i]);
    }
    
    printf("InOrder traversal: ");
    
    inOrder(root);
    return 0;
}