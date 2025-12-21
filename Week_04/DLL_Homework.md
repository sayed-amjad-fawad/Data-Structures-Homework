# Week 4: DLL and Recursion

### 1. Adding to the end of a DLL
To add an element at the end, I create a new node. I set its `prev` to the current `tail`, then set `tail->next` to the new node. Finally, I move the `tail` pointer to the new node.

### 2. Recursive deletion
I can delete everything using a function that calls itself for the `next` node until it hits `NULL`, then frees the nodes as it returns.

```c
void delete_all(struct Node* h) {
    if (h == NULL) return;
    delete_all(h->next);
    free(h);
}
