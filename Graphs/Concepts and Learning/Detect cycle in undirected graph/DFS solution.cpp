class Solution {
  public:
    // Util func for DFS solution
    bool DFS(vector<int> adj[], int source, vector<bool> &visited, int parent) {
        visited[source] = true;
        for(auto u: adj[source]) {
            if(!visited[u]){
                if(DFS(adj, u, visited, source))
                    return true;   
            }
            else if(u != parent)
                return true;
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        for(int i = 0; i < V; i++) {
            if(!visited[i])
                if(DFS(adj, i, visited, -1))
                    return true;
        }
        return false;
    }
};

