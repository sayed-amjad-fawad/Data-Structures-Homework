/* * HW 02: Tower of Hanoi
 * * Complexity:
 * - Time: O(2^n) - The moves double for every new disk.
 * - Space: O(n) - This is for the recursive stack depth.
 */

#include <stdio.h>

// This function calls itself to move disks
void moveDisks(int n, char start, char finish, char middle) {
    // If there is only 1 disk, just move it directly
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", start, finish);
        return;
    }

    // Step 1: Move n-1 disks to the middle peg
    moveDisks(n - 1, start, middle, finish);

    // Step 2: Move the biggest disk to the finish peg
    printf("Move disk %d from %c to %c\n", n, start, finish);

    // Step 3: Move the n-1 disks from middle to finish
    moveDisks(n - 1, middle, finish, start);
}

int main() {
    int numDisks = 3; // We can change this for more disks
    printf("Steps for Tower of Hanoi with %d disks:\n", numDisks);
    
    // A = starting peg, C = target peg, B = temporary peg
    moveDisks(numDisks, 'A', 'C', 'B');

    return 0;
}
