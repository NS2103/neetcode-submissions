class Solution {
   public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && vis[i][j] == -1) {
                    count++;
                    vis[i][j] = 1;
                    // do bfs on it
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    int dr[4] = {-1, 0, 1, 0};
                    int dc[4] = {0, -1, 0, 1};
                    while (!q.empty()) {
                        auto cur = q.front();
                        q.pop();
                        for (int i = 0; i < 4; i++) {
                            int newr = cur.first + dr[i];
                            int newc = cur.second + dc[i];

                            if (newr >= 0 && newr < n && newc >= 0 && newc < m) {
                                if (grid[newr][newc] == '1' && vis[newr][newc] == -1) {
                                    vis[newr][newc] = 1;
                                    q.push({newr, newc});
                                }
                            }
                        }
                    }
                }
            }
        }

        return count;
    }
};
