#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element: %d \n",ptr->data);
    ptr = ptr->next;
    }
}
//CASE 1: Deleting the first element from the list
struct Node* DeleteFirst(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// CASE 2: Deleting the element at an index
struct Node* DeleteAtIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// CASE 3: Delete the last element; 
struct Node* DeleteTheLast(struct Node* head){
    struct Node* q = head;
    struct Node* p = head;
    while(q->next!=NULL){
        p = q;
        q=q->next;
    } 
    // while (p->next!=q)
    // {
    //     p=p->next;
    // }
    p->next = q->next;
    free(q);
    return head;
}
// CASE 4: Delete the element with a given value 
struct Node* DeleteAtIndex(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->data!=value && q->next!=NULL){
        p = q;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
    
    // head = (insertAfterNode(head, second, 100));
    
    // Terminate the list at the third node
    third->data = 12;
    third->next = NULL;
    printf("\nLinked List Before Deletion:\n");
    LinkedListTraversal(head);
    
    // head = DeleteFirst(head); //For delelting first element in the list
    // head = DeleteAtIndex(head, 2);
    head = DeleteTheLast(head);
    printf("\nLinked List after Deletion:\n");
    LinkedListTraversal(head);
    
    return 0;
}

// FAILS EDGE CASES< FOR NULL HEAD< SINGLE ELEMENT< ETC...
// struct Node* DeleteAtIndex(struct Node* head, int index){
//     struct Node* p = head;
//     struct Node* q = head;
//     int i =0; 
//     while(i!=index-1){
//         p = q;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }