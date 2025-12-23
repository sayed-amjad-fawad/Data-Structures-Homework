/* * HW 07: Array Insertion and Deletion
 * * Complexity:
 * - Time: O(n) because we have to move (shift) other elements.
 * - Space: O(1) as we use the same array.
 */

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArr[10] = {10, 20, 40, 50}; // Initial list
    int count = 4;
    int pos = 2; // Position to insert (index 2)
    int newVal = 30;

    printf("Original: ");
    printArray(myArr, count);

    // --- INSERTION LOGIC ---
    // Shift everything to the right to make a hole
    for (int i = count; i > pos; i--) {
        myArr[i] = myArr[i - 1];
    }
    myArr[pos] = newVal;
    count++;

    printf("After Insert: ");
    printArray(myArr, count);

    // --- DELETION LOGIC ---
    // Remove the element at index 0 and shift left
    for (int i = 0; i < count - 1; i++) {
        myArr[i] = myArr[i + 1];
    }
    count--;

    printf("After Delete: ");
    printArray(myArr, count);

    return 0;
}
