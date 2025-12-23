/* * HW 09: DFS and BFS Graph Implementation
 * * Complexity:
 * - Time: O(V + E) where V is vertices and E is edges.
 * - Space: O(V) for the visited array.
 */

#include <stdio.h>

int adj[4][4] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {0, 1, 1, 0}
};
int seen[4] = {0, 0, 0, 0};

// Depth First Search (DFS)
void runDFS(int start) {
    seen[start] = 1;
    printf("%d ", start);
    for (int i = 0; i < 4; i++) {
        if (adj[start][i] == 1 && !seen[i]) {
            runDFS(i);
        }
    }
}

int main() {
    printf("DFS Traversal starting from node 0: ");
    runDFS(0);
    printf("\n");
    return 0;
}
