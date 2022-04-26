class Solution {
  public:
  vector<int> dx = {-1, 0, 1, 0, 1, -1, -1, 1};
  vector<int> dy = {0, -1, 0, 1, 1, 1, -1, -1};
    bool isValid(int x, int y, int n, int m) {
        return (x >= 0 and x < n and y >= 0 and y < m);
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count = 0, n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!visited[i][j] and grid[i][j] == '1') {
                    count++;
                    visited[i][j] = true;
                    q.push({i, j});
                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int k = 0; k < 8; k++) {
                            if(isValid(x + dx[k], y + dy[k], n, m) and !visited[x+dx[k]][y+dy[k]] and grid[x+dx[k]][y+dy[k]] == '1') {
                                q.push({x + dx[k], y + dy[k]});
                                visited[x+dx[k]][y+dy[k]] = true;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};

