#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* createNode(int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void traversal(struct Node* head){
    int i = 0;
    while(head!=NULL){
        printf("ELEMENT %d at index %d: %d\n",i+1, i,head->data);
        head=head->next;
        i++;
    }
}

struct Node* InsertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;

    if(head!=NULL)
     head->prev = ptr;
    return ptr;
}

// It will insert the element at the desired index(Indexing starts from 0)
struct Node* InsertAtPosition(struct Node* head, int data, int index){
    struct Node* ptr = createNode(data);
    struct Node* p = head;
    struct Node* q = head;
    int i = 0;
    while(i!=index){
        p=q;
        q=q->next;
        i++;
    }
    // connecting ptr foward and backwards
    ptr->next = q;
    ptr->prev = p;

    // updating neighbours(p & q)
    q->prev = ptr;
    p->next = ptr;
    return head;
}

struct Node* InsertAtEnd(struct Node* head,int data){
    struct Node* ptr = createNode(data);
    struct Node* q = head;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next = ptr;
    ptr->prev = q;
    return head;
}

struct Node* DeleteTheFirst(struct Node* head){
    struct Node* ptr = head->next;
    ptr->prev = NULL;
    free(head);
    return ptr;
}

struct Node* DeleteTheBetween(struct Node* head, int pos){
    struct Node* p = head;
    struct Node* q = head;
    struct Node* r = head;
    int i = 0;
    while(i!=pos-1){
        p = q;
        q = q->next;
        r = q->next;
        i++;
    }
    p->next = r;
    r->prev = p;
    free(q);
    return head;
}

struct Node* reverse(struct Node* head){
    struct Node* p = head;
    struct Node* q = head;
    int temp = 0;
    while(q->next!=NULL){
        q = q->next;
    }
    while(p->next!=q){
        temp = p->data;
        p->data = q->data;
        q->data = temp;
        p = p->next;
        q = q->prev;
    }
    temp = p->data;
    p->data = q->data;
    q->data = temp;
    free(temp);
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
    head->prev = NULL;
    
    // Link 2st and 3nd Node
    second->data = 9;
    second->next = third;
    second->prev=head;

    // Link 3rd and 4th Node
    third->data = 12;
    third->next = fourth;
    third->prev = second;

    
    fourth->data = 14;
    fourth->next = NULL;
    fourth->prev = third;

    // printf("Doubly Linked List before traversal:\n");
    //  printf("Doubly Linked List before deletion:\n");
    printf("Doubly Linked List before insertion:\n");
    traversal(head);
    
    head=InsertAtFirst(head,69);
    head=InsertAtFirst(head,23);
    // head = InsertAtIndex(head,90,2);
    // head = InsertAtEnd(head,2);
    printf("Doubly Linked List after insertion:\n");
    traversal(head);
    //  head=DeleteTheFirst(head);
    // head = DeleteTheBetween(head, 3);
    // printf("Doubly Linked List before deletion:\n");
    printf("Doubly Linked List before reversal:\n");
    traversal(head);
    head = reverse(head);
    printf("Doubly Linked List after reversal:\n");
    traversal(head);
    return 0;
}