    Node* insert(Node* node, int data) {
        if (!node) {
            // If the tree is empty, create a new node and return it as the root.
            Node* newNode = new Node(data);
            return newNode;
        }

        if (data < node->data) {
            // If the data is less than the current node's data, insert into the left subtree.
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            // If the data is greater than the current node's data, insert into the right subtree.
            node->right = insert(node->right, data);
        }

        // If data is equal to the current node's data, don't modify the tree.

        return node;
    }
