# Week 3: Linked List Complexity Analysis

Based on the implementation in `linked_list.c`, here is the time complexity:

| Operation | Time Complexity | Reason |
| :--- | :--- | :--- |
| **Traversal** | O(n) | Must visit every node once to print it. |
| **Insertion at Front** | O(1) | Just need to change pointers; no looping required. |
| **Insertion at End** | O(n) | Must traverse the entire list to find the last node. |
| **Deletion (by value)** | O(n) | Must search through the list to find the node. |
