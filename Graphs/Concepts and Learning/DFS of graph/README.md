Depth First Search (DFS)

DFS is another form of graph traversal apart from BFS. 
Unlike BFS, DFS is recursive in nature. We pick a source and go to its adjacent, then we pick that adjacent and go to its own adjacent. We keep doing this recursively until we start repeating elements, then we choose the next adjacent of the source and so on.

Note: Please refer to the Problem description and Solution file to see the code implementation.

Idea for code implementation of DFS
We define a DFS Recursive function. For every source that we choose, we recursively call its adjacent, until we exhaust the graph.

DFS traversal can have similar modifications in problems as we discussed in BFS. Please see BFS first in order to understand the modifications.

For disconnected graphs, we can consider every node as source and pass it to recursive function as an argument. 
For counting islands or disconnected components, we can keep a count of how many times we made a call to recursive function.

Applications of DFS
- Cycle detection in graph.
- Topological sorting which is very much used in the 'make' command of linux.
- DFS is also useful in solving a problem called strongly connected components (insert link).
- Solving maze and similar puzzles (using Backtracking). DFS helps to build that logic for those problems.
- Path finding
