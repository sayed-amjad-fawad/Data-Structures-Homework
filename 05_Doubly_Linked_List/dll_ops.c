/* * HW 05: Doubly Linked List (Insert, Delete, Traversal)
 * * Complexity:
 * - Traversal: O(n) - must visit nodes one by one.
 * - Insertion/Deletion: O(1) if you are already at the node.
 * - Space: O(n) to store the nodes.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to print the list forward
void showList(struct Node* head) {
    struct Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = NULL;

    showList(head);

    return 0;
}
