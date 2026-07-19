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

struct Node* LinkedListSorting(struct Node* head, int size) {
    struct Node* p;
    struct Node* q;
    int temp;
    
    for (int i = 0; i < size - 1; i++) {
        p = head;
        q = head->next;
        for (int j = 0; j < size - i - 1; j++) {
            if (p->data > q->data) {
                // swap
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            p = q;
            q = q->next;
        }
    }
    return head;
}

int LinearSearch(struct Node* head, int element, int size){
    struct Node* p = head;
    for(int i = 0; i<size; i++){
        if(p->data == element)
        return i;
        else 
        p = p->next;
    }
    return -1;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    // ALlocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
    // Link 1st and 2nd Node
    head->data = 7;
    head->next = second;
    
    // Link 2st and 3nd Node
    second->data = 12;
    second->next = third;
    
    // Link 2st and 3nd Node
    third->data = 9;
    third->next = fourth;
    
    // Terminates the list at the fourth node
    fourth->data = 3;
    fourth->next = NULL;
    printf("\nLinked List Before Sorting:\n");
    LinkedListTraversal(head);
    
    head = LinkedListSorting(head,4);
    printf("\nLinked List after Sorting:\n");
    LinkedListTraversal(head);
    
    printf("\nThe element found at index: %d",LinearSearch(head,29,4));
    return 0;
}
    // struct Node* LinkedListSorting(struct Node* head, int size){
        //     struct Node* p = head;
    //     struct Node* q = head->next;
    //     int temp = 0;
    //     for (int i = 0; i < size; i++)
    //     {
        //         for (int j = 0; j < size; j++)
        
    //         {
    //             if(p->data > q-> data){
    //                 q = q->next;
    //             }
    //             else if(p->data < q->data){
    //                 temp = q->data;
    //                 q->data = p->data;
    //                 p->data = temp;
    //             }
    //         }           
    //     }
    //     return head;
    // }