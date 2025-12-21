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
3. How you can add an element between elements at double linked list?
To insert between two existing nodes, I have to update 4 pointers:

The new node's next and prev pointers.

The next pointer of the node that comes before it.

The prev pointer of the node that comes after it.

4. Difference between circular linked list and linked list (with Sorting)
Structure: In a standard linked list, the last node points to NULL. In a circular linked list, the last node points back to the first node to create a loop.

Sorting Difference: When using algorithms like Bubble Sort or Insertion Sort:

In a standard list, the code knows it is finished when it hits NULL.

In a circular list, the sorting algorithm must track the head node's address. If it doesn't, it will enter an infinite loop because it will just keep going around the circle forever without hitting a terminator.
