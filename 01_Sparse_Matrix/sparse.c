/* * HW 01: Sparse Matrix
 * * Complexity:
 * - Time: O(rows * cols) because we check every spot in the table.
 * - Space: O(k) where k is the number of non-zero numbers we find.
 */

#include <stdio.h>

int main() {
    // 1. My sample matrix with mostly 0s
    int myTable[4][4] = {
        {0, 0, 0, 10},
        {0, 5, 0, 0},
        {3, 0, 0, 0},
        {0, 0, 0, 0}
    };

    int r = 4, c = 4;
    int k = 0;

    // 2. Count how many numbers are NOT zero
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (myTable[i][j] != 0) {
                k++;
            }
        }
    }

    // 3. Triplet format: [Row, Col, Value]
    // The first row (index 0) is the header for the whole table
    int triplet[k + 1][3];
    triplet[0][0] = r;      // Total rows
    triplet[0][1] = c;      // Total columns
    triplet[0][2] = k;      // Count of actual numbers

    int currentPos = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (myTable[i][j] != 0) {
                triplet[currentPos][0] = i;
                triplet[currentPos][1] = j;
                triplet[currentPos][2] = myTable[i][j];
                currentPos++;
            }
        }
    }

    // 4. Print the result for the teacher
    printf("Sparse Matrix Triplet Representation:\n");
    printf("Row\tCol\tValue\n");
    for (int i = 0; i <= k; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }

    return 0;
}
