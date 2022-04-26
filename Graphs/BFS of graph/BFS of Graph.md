Breadth First Search (BFS)
It is a way of graph traversal. We are given a source node and we have to traverse through all the nodes reachable from that source.

The logic for BFS is very similar to that of tree traversal, but with a slight modification. We don't print already visited/discovered nodes.

Note: Refer to the Problem description and Solution file to see how BFS is implemented in code.

Idea for BFS traversal
- We use a boolean array named 'visited' and initialise it as false. This array keeps track of all the visited/discovered nodes.
- Push the source node in a queue.
- Run a loop until queue is empty. Pop items from queue one by one.
- If the popped out number is not visited, mark it as visited now and traverse through its edges and push those vertices in the queue.

There can be slight modification problems for BFS of Graph.

Modification 1
A slight modification to the problem can be when the graph is disconnected but we can only go to the connected vertices. In that case we simply check every node as a source.

void BFS(vector<int> adj[], int V) {
    bool visited[V+1] = {false};
    for(int i = 0; i < V; i++) {
        if(!visited[i])
            bfsOfGraph(adj, i, visited);
    }
}

Modification 2
Another variation can be to count the no. of islands/components of graph. Then we can simply count in the above code snippet how many times we call the function bfsOfGraph()

Applications of BFS
- Finding the shortest path in an unweighted graph
- Crawlers in search engine uses the same principle as BFS
- Peers to peers network like bit torrent
- Social networking searches recommend those people to you who are your 1st, 2nd and 3rd connections
- Automatic garbage collection (e.g. in Java) uses BFS to find the disconneted/isolated nodes and deletes it automatically
- Cycle detection in Graphs
- Ford Fulkerson algo
- Broadcasting also uses BFS to transmit info through connected vertices in network
