# Week 11: Graph Clustering

### How to do clustering in a graph?
Clustering involves grouping nodes such that nodes within the same group (cluster) are more densely connected to each other than to nodes in other groups.

### How are they separated?
Common methods used to identify and separate these clusters include:
- **Markov Clustering (MCL):** Uses random walks to find dense regions in a graph.
- **K-Means Clustering:** Groups nodes based on distance or similarity metrics.
- **Spectral Clustering:** Uses the eigenvalues of the graph's Laplacian matrix to find partitions.
