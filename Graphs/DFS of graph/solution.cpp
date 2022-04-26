class Solution {
  public:
    // Recursive func
    void DFSRec(vector<int> adj[], int source, bool visited[], vector<int> &ans) {
        if(visited[source]) return;
        visited[source] = true;
        ans.push_back(source);
        for(auto i: adj[source]) {
            if(!visited[i])
                DFSRec(adj, i, visited, ans);
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        bool visited[V] = {false};
        for(int i = 0; i < V; i++){
            if(!visited[i])
                DFSRec(adj, i, visited, ans);
                // If any vertex is not visited then it will call
                // We can count or traverse disconnected graph like this as well
        }
        return ans;
    }
};
