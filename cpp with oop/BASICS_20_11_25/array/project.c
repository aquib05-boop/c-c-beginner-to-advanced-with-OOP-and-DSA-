#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int token_number;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Initialize queue
void init_queue(struct Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

// Enqueue operation
void generate_token(struct Queue* q, int token_number) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->token_number = token_number;
    new_node->next = NULL;

    if (q->front == NULL) {
        q->front = new_node;
        q->rear = new_node;
    } else {
        q->rear->next = new_node;
        q->rear = new_node;
    }

    printf("Token %d generated successfully.\n", token_number);
}

// Dequeue operation
int call_next_customer(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty. No customers to call.\n");
        return -1;
    }

    struct Node* temp = q->front;
    int token = temp->token_number;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    printf("Calling customer with Token %d.\n", token);
    return token;
}

// Display queue contents
void display_queue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = q->front;
    printf("Current Queue: ");

    while (temp != NULL) {
        printf("%d ", temp->token_number);
        temp = temp->next;
    }

    printf("\n");
}

// Check if queue is empty
int check_status(struct Queue* q) {
    return (q->front == NULL);
}

// Main function
int main() {
    struct Queue q;
    init_queue(&q);

    int choice;
    int token_counter = 1;

    while (1) {
        printf("\n=== Bank Token Queue System ===\n");
        printf("1. Generate Token (Enqueue) ");
        printf("2. Call Next Customer (Dequeue) ");
        printf("3. Display Queue ");
        printf("4. Check if Queue is Empty ");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                generate_token(&q, token_counter);
                token_counter++;
                break;

            case 2:
                call_next_customer(&q);
                break;

            case 3:
                display_queue(&q);
                break;

            case 4:
                if (check_status(&q))
                    printf("Queue is empty.\n");
                else
                    printf("Queue is NOT empty.\n");
                break;

            case 5:
                printf("Exiting... Thank you!\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
