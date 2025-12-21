# Week 4: Doubly Linked Lists (DLL) and Recursion

### 1. How to add an element to the end of a DLL?
To add an element at the end, create a new node. Set the new node's `prev` pointer to the current `tail`, set the current `tail->next` to the new node, and update the `tail` pointer to be the new node.

### 2. How to delete all elements of a linked list recursively?
Use a recursive function that calls itself for the `next` node until it reaches `NULL`. On the way back up the call stack, it frees the current node.

**Recursive Code Snippet:**
```c
void deleteAll(struct Node* head) {
    if (head == NULL) return;
    deleteAll(head->next);
    free(head);
}

### 3. How to add an element between elements in a DLL?
Update 4 pointers: the new node’s `next` and `prev`, the previous node’s `next`, and the next node’s `prev`.

### 4. Difference between Circular Linked List and Standard Linked List
- **Standard:** The last node's `next` pointer is `NULL`.
- **Circular:** The last node's `next` pointer points back to the first node, creating a loop.
