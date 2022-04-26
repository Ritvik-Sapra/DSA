# Problem Description

Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.

Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

Input:

> 5 4
> 0 1 
> 0 2
> 0 3 
> 2 4

Expected Output: 

> 0 1 2 3 4 

## Explanation

0 is connected to 1, 2, 3.

2 is connected to 4.

So starting from 0, it will go to 1 then 2
then 3.After this 2 to 4, thus bfs will be

> 0 1 2 3 4.

# How to solve?

We use the same logic as of level order traversal of tree but only with slight modification that we don't print alreade visited/discovered nodes.
A slight modification to the problem can be when the graph is disconnected but we can only go to the connected vertices. In that case we simply check every node as a source.

```
void BFS(vector<int> adj[], int V) {
    bool visited[V+1] = {false};
    for(int i = 0; i < V; i++) {
        if(!visited[i])
            bfsOfGraph(adj, i, visited);
    }
}
```

Another variation can be to count the no. of islands/components of graph. Then we can simply count in the above code snippet how many times we call the function bfsOfGraph()

