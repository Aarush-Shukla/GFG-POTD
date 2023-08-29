Node *compute(Node *head)
    {
       if (head->next == NULL) {
            return head;
        }
        Node* node = compute(head->next);
        if (node->data > head->data) {
            return node;
        } else {
            head->next = node;
            return head;
        }
    }
