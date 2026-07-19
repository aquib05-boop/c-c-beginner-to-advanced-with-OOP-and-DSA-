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
    
    inOrder(p);
    return 0;
}


//     struct Node* l = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* r = (struct Node*)malloc(sizeof(struct Node));
//     for(l=root; l->left!=NULL; l=l->left){
//        if(l!=NULL){
//         if(l->right!=NULL && l->left==NULL){
//             printf("%d ",l->data);
//             l=l->right;
//         }
//         if(l->right==NULL && l->left!=NULL){
//             while(l->left!=NULL){
//                 l=l->left;
//             }
//             printf("%d ",l->data);
//         }
//         if(l->left==NULL){
//            printf("%d ",l->data);
//            l=l->right; 
//         }
//         if(l->right==NULL){
//             continue;
//         }
//         printf("%d ", l->data);
//     }
// }