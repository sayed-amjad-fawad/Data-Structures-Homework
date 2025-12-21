#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// 1. Traversal: Print the list
void printList(struct Node* n) {
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

// 2. Insertion at the Front
void insertFront(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// 3. Insertion at the End
void insertEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

// 4. Deletion by Value
void deleteNode(struct Node** head_ref, int key) {
    struct Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertFront(&head, 20); // List: 20 -> 10
    insertEnd(&head, 30);   // List: 20 -> 10 -> 30
    
    printf("Linked List after insertions: ");
    printList(head);

    deleteNode(&head, 10);
    printf("Linked List after deleting 10: ");
    printList(head);

    return 0;
}
