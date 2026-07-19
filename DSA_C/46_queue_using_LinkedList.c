#include <stdio.h>
#include <stdlib.h>

struct Node* f=NULL;
struct Node* r=NULL;

struct Node{
    int data;
    struct Node* next;
};

void enqueue(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("QUEUE is Full!/n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}

int dequeue(){
    int val=-1;
    struct Node* ptr=f;
    if(f!=NULL){
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    else{
        printf("Queue is empty!\n");
    }
}

void LinkedListTraversal(struct Node* ptr){
    printf("Printing the elements of Queue..\n");
    while(ptr!=NULL){
        printf("Element: %d \n",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    enqueue(34);
    enqueue(35);
    enqueue(36);
    LinkedListTraversal(f);
    dequeue();
    LinkedListTraversal(f);
    return 0;
}



// void enqueue(struct Node* q, int val){
    //     if(q==NULL){
        //         q->data = val;
        //         q->next = NULL;
        //     }
        //     else{
            //     struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
            //     struct Node* f = q;
            //     struct Node* r = q;
            //     ptr->next=NULL;
            //     ptr->data=val;
            //     while(r->next!=NULL){
                //         r=r->next;
                //     }
                //     r->next=ptr;
                // }
                // }
                
                // void display(struct Node* ptr){
//     while(ptr->next!=NULL){
    //         printf("%d ",ptr->data);
    //     }
    // }
    
    
    // WITHOUT USING GLOBAL VARIABLE
    
    // void enqueue(struct Node** f, struct Node** r, int val){
    //     struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    //     if(n==NULL){
    //         printf("QUEUE is Full!/n");
    //     }
    //     else{
    //         n->data=val;
    //         n->next=NULL;
    //         if(*f==NULL){
    //             *f=*r=n;
    //         }
    //         else{
    //             (*r)->next=n;
    //             *r=n;
    //         }
    //     }
    // }