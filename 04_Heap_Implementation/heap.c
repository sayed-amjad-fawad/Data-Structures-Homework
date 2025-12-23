/* * HW 04: Max Heap Implementation
 * * Complexity:
 * - Building Heap: O(n).
 * - Insertion/Deletion: O(log n).
 * - Space: O(n) using an array to store the tree.
 */

#include <stdio.h>

// Helper to swap two numbers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This function fixes the heap property from the top down
void heapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check if left child is bigger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check if right child is bigger than current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not the root, swap and keep fixing
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

int main() {
    int myData[] = {4, 10, 3, 5, 1};
    int n = 5;

    // Build the heap (rearrange the array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(myData, n, i);
    }

    printf("Max Heap Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myData[i]);
    }
    printf("\n");

    return 0;
}
