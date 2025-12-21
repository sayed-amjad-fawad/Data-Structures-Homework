#include <stdio.h>

// Traversal: Function to print all elements in the array
void traverse(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Initial array for the homework assignment
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; // Current number of elements

    printf("Initial Traversal:\n");
    traverse(arr, n);

    // Insertion: Adding 25 at index 2
    int pos = 2, x = 25;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[pos] = x;
    n++;
    printf("\nAfter Inserting 25 at index 2:\n");
    traverse(arr, n);

    // Deletion: Removing the element at index 3
    int del_pos = 3;
    for (int i = del_pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    n--;
    printf("\nAfter Deleting element at index 3:\n");
    traverse(arr, n);

    return 0;
}
