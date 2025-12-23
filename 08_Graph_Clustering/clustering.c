/* * HW 08: Graph Clustering from Array
 * * Complexity:
 * - Time: O(V^2) where V is the number of vertices.
 * - Space: O(V) to keep track of visited nodes.
 */

#include <stdio.h>

// A simple graph represented as an adjacency matrix
int graph[4][4] = {
    {1, 1, 0, 0},
    {1, 1, 0, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 1}
};

int visited[4] = {0, 0, 0, 0};

void findCluster(int node) {
    visited[node] = 1;
    printf("%d ", node);
    for (int i = 0; i < 4; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            findCluster(i);
        }
    }
}

int main() {
    printf("Clusters found in the graph:\n");
    for (int i = 0; i < 4; i++) {
        if (!visited[i]) {
            printf("Cluster: ");
            findCluster(i);
            printf("\n");
        }
    }
    return 0;
}
