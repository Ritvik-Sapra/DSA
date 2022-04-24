There are two types of graphs: 1) Directed and 2) Undirected

A Walk is when we get all the vertices going from one V to another V.
A Simple Path is known as when we get all the vertices going from one V to another V but not repeating any edges in between.
A complete graph is the one where there is a walk where we start from one V and end at same V.

Graph is represented by two types: 1) Adjacency list and 2) Adjacency Matrix.

Adjacency Matrix is represented by Matrix of Size V X V (V are the vertices). If there is an Edge (E) between ith V to jth V then we have 1 otherwise 0.
For undirected graphs, we have 1 at (j, i) too.
The matrix is symetric for undirected graph, but may not be symmetric for directed graphs.

Adjacency matrix is good but it stores useless info as well, i.e. the 0s where there is no edge. Also, the time to find if there is an edge between two Vs is O(n2). To improve this, we have Adjacency List. It saves space and also makes the process of finding adjacent V faster.
Adjacency list is an array of lists (can be LL or vectors) where we store all the adjacent V to the ith V (i is the index of the Adjacency list).
E.g. 0: 1 -> 2
1: 3
2: 1 -> 3
3: 2
Try to make this graph yourself.

Note: Here we are representing V as numbers but there might be a scenerio where we have to represent V as a string. In that case we store the strings in an array and use their indexes as V. This will work but we may have to do reverse mapping in some cases, i.e. Find the index (v) of a given string. To do this efficiently we can also build a hash table where we have strings as keys and their indexes as values.

Please refer to Adjacency List code implementation and Adjacency Matrix code implementation to understand their coding.


