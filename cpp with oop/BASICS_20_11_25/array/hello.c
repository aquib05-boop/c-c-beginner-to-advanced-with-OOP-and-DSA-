FUNCTION generate_token(queue, token_number):
    new_node = CREATE NODE
    new_node.token_number = token_number
    new_node.next = NULL

    IF queue.front == NULL:
        queue.front = new_node
        queue.rear = new_node
    ELSE:
        queue.rear.next = new_node
        queue.rear = new_node
    ENDIF
END FUNCTION
