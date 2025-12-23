/* * HW 06: Circular Linked List (Insert, Delete, Traversal)
 * * Complexity:
 * - Traversal: O(n).
 * - Note: You must stop when temp == head to avoid an infinite loop.
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
};

void printCircular(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    printf("Circular List: ");
    do {
        printf("%d -> ", temp->val);
        temp = temp->next;
    } while (temp != head); // Loop until we come back to start
    printf("(back to head)\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = (struct Node*)malloc(sizeof(struct Node));

    head->val = 5;
    head->next = last;

    last->val = 15;
    last->next = head; // This makes it circular

    printCircular(head);

    return 0;
}
