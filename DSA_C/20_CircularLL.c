#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node*head){
    struct Node* ptr = head;
    do{
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct Node* InsertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    struct Node* p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node* InsertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while(p->next==head){
        p=p->next;
    }
    ptr->data = data;
    ptr->next = head;
    p->next = ptr;
    return head;
}

struct Node* InsertAtIndex(struct Node* head, int data, int index){
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

struct Node* DeleteAtFirst(struct Node* head){
    struct Node* p = head;
    p->next = head->next;
    return p;
}

struct Node* DeleteAtIndex(struct Node* head, int index){
    struct Node* p = head;
    for(int i = 0; i < index-1; i++){
        p = p->next;
    }
    p->next = p->next->next;
}

struct Node* DeleteTheEnd(struct Node* head){
    struct Node* p = head;
    while(p->next!=NULL){
        p =  p->next;
    }
    p->next = head;
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    // ALlocate mfemory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link 1st and 2nd Node
    head->data = 7;
    head->next = second;
    
    // Link 2st and 3nd Node
    second->data = 9;
    second->next = third;
    
    // Link 3rd and 4th Node
    third->data = 12;
    third->next = fourth;

    // Last again points to first //CIRCULAR LL
    fourth->data = 14;
    fourth->next = head;

    printf("Before Insertion:\n");
    LinkedListTraversal(head);
    
    head = InsertAtFirst(head,233);
    
    printf("\nAfter Insertion at first: \n");
    LinkedListTraversal(head);

    return 0;
}