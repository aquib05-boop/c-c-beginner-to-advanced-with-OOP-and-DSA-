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

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    // ALlocate mfemory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link 1st and 2nd Node
    head->data = 7;
    head->next = second;
    
    // Link 2st and 3nd Node
    second->data = 9;
    second->next = third;
    
    // Terminate the list at the third node
    third->data = 12;
    third->next = NULL;

    LinkedListTraversal(head);

    return 0;
}