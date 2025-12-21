#include <stdio.h>
#include <stdlib.h>

// Basic structure for a Binary Tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Helper function to allocate a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Pre-order Traversal Implementation (Root -> Left -> Right)
void preOrderTraversal(struct Node* root) {
    if (root == NULL) return;

    // Process current node
    printf("%d ", root->data);
    
    // Recur on left subtree
    preOrderTraversal(root->left);
    
    // Recur on right subtree
    preOrderTraversal(root->right);
}

int main() {
    // Creating a simple binary tree structure
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Pre-order Traversal Sequence: ");
    preOrderTraversal(root);
    printf("\n");

    return 0;
}
