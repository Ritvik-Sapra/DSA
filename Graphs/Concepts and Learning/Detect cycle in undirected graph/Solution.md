# Detect Cycle in an Undirected Graph

Note: Detecting cycle in an undirected graph is simpler than detecting cycle in a directed graph

To solve this problem we already know how to approach it. We will do a traversal of the graph and in order to find a cycle, we will keep track of all the visited nodes. If we see a visited node again, there may be a cycle.

However, there is a small corner case here. Consider the below undirected graph containg cycle.

[Consider this graph](./image.png)

In this graph, we will start from 0. We will go to 1, and now 1 has 3 adjacents: 0, 2 and 4. From this, 0 is already visited but it is not a cycle.

So we have to maintain a parent variable to keep track of the parent. The visited node is not necessarily cycle if its a parent node. 

Note: This problem can be solved with DFS or BFS. There are solution files for both the solutions.


