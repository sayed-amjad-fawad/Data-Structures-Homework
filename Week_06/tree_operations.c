#include <stdio.h>
#include <stdlib.h>

// Structure for a Tree Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Pre-order Traversal (Root -> Left -> Right)
void printPreOrder(struct Node* node) {
    if (node == NULL) return;

    // Visit the Root
    printf("%d ", node->data);
    // Traverse Left
    printPreOrder(node->left);
    // Traverse Right
    printPreOrder(node->right);
}

int main() {
    /* Creating the tree from your second photo:
              1
            /   \
           2     3
          / \   / \
         4   5 6   7
    */
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    printf("Pre-order Traversal: ");
    printPreOrder(root);
    // Expected output: 1 2 4 5 3 6 7

    return 0;
}
