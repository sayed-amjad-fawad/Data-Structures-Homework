# Week 4: DLL and Recursion

### 1. How to add an element end of double linked list?
To add an element at the end, I create a new node. I set its `prev` pointer to the current `tail` node, then set the current `tail->next` to point to this new node. Finally, I update the `tail` pointer to the new node.

### 2. How you can delete all the elements of a linked list? (Recursive)
I can delete all elements using a recursive function that traverses to the end of the list first, and then frees each node as the recursion unwinds.

```c
void delete_all(struct Node* h) {
    if (h == NULL) return;
    delete_all(h->next);
    free(h);
}
