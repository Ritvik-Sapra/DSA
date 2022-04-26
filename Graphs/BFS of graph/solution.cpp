class Solution
{
public:
  // Function to return Breadth First Traversal of given graph.
  vector<int> bfsOfGraph(int V, vector<int> adj[])
  {
    // Code here
    vector<int> ans;
    bool visited[V + 1] = {false};
    queue<int> q;
    visited[0] = true;
    q.push(0);
    while (!q.empty())
    {
      int v = q.front();
      q.pop();
      ans.push_back(v);
      for (auto j : adj[v])
      {
        if (!visited[j])
        {
          q.push(j);
          visited[j] = true;
        }
      }
    }
    return ans;
  }
};
