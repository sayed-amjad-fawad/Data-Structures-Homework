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

// Assume newNode is created and NodeA/NodeB are identified
newNode->prev = NodeA;   // Link newNode back to NodeA
newNode->next = NodeB;   // Link newNode forward to NodeB
NodeA->next   = newNode; // Link NodeA forward to newNode
NodeB->prev   = newNode; // Link NodeB back to newNode


- **Standard List:** The last node's 'next' pointer is always NULL. 
  * Sorting: Algorithms stop naturally when they hit the NULL terminator.

- **Circular List:** The last node's 'next' pointer points back to the 'head'.
  * Sorting: Algorithms must save the head address; otherwise, they 
    will loop infinitely because they never encounter a NULL.
