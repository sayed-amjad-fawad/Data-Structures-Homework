#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node* next;
};

void printList(struct Node* ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->item);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void push(struct Node** headPtr, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->item = val;
    newNode->next = *headPtr;
    *headPtr = newNode;
}

void deleteItem(struct Node** headPtr, int key) {
    struct Node *tmp = *headPtr, *prev = NULL;
    
    if (tmp != NULL && tmp->item == key) {
        *headPtr = tmp->next;
        free(tmp);
        return;
    }
    
    while (tmp != NULL && tmp->item != key) {
        prev = tmp;
        tmp = tmp->next;
    }
    
    if (tmp == NULL) return;
    
    prev->next = tmp->next;
    free(tmp);
}

int main() {
    struct Node* head = NULL;

    push(&head, 30);
    push(&head, 20);
    push(&head, 10);
    
    printf("Current List: ");
    printList(head);

    deleteItem(&head, 20);
    printf("After deleting 20: ");
    printList(head);

    return 0;
}
