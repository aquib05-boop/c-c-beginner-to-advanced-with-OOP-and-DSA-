#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element: %d \n",ptr->data);
    ptr = ptr->next;
    }
}

// CASE:1
struct Node* insertAtFIrst(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// CASE:2
struct Node* insertAtIndex(struct Node* head, int data, int index){
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i!=index-1){
        p= p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
    return head;
}

// CASE:3
struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* q = head;
    while(q->next!=NULL){
        q=q->next;
    }
    ptr->next = q->next;
    q->next = ptr;
    ptr->data = data;
    return head;
}

// CASE:4
struct Node* insertAfterNode(struct Node* head, struct Node*prevNode, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;  
    
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    // ALlocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link 1st and 2nd Node
    head->data = 7;
    head->next = second;
    
    // Link 2st and 3nd Node
    second->data = 9;
    second->next = third;
    
    head = (insertAfterNode(head, second, 100));

    // Terminate the list at the third node
    third->data = 12;
    third->next = NULL;

    LinkedListTraversal(head);
    printf(" \nNEW LIST:\n");
    
    // head =  insertAtFIrst(head, 6);
    // head = insertAtIndex(head, 288, 1);
    // head = insertAtEnd(head, 234);
    LinkedListTraversal(head);

    return 0;
}