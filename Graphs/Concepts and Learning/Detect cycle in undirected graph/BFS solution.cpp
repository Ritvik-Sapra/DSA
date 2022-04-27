class Solution {
  public:
    // Util function for BFS
    bool BFS(vector<int> adj[], int V, vector<bool> &visited, int source) {
        queue<int> q;
        vector<int> parent(V, -1);
        visited[source] = true;
        q.push(source);
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            for(auto u: adj[v]) {
                if(!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                    parent[u] = v;
                }
                else if(parent[v] != u)
                    return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                if(BFS(adj, V, visited, i))
                    return true;
            }
        }
        return false;
    }
};

