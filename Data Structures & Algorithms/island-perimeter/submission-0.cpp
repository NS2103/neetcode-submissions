class Solution {
   public:
    int islandPerimeter(vector<vector<int>>& grid) {
        // implementing dfs

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, -1));

        queue<pair<int, int>> q;
        vector<int> dr = {1, 0, -1, 0};
        vector<int> dc = {0, 1, 0, -1};

        int perimeter = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == -1) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }

                while (!q.empty()) {
                    auto [row, col] = q.front();
                    q.pop();

                    for (int k = 0; k < 4; k++) {
                        int newr = row + dr[k];
                        int newc = col + dc[k];

                        if (newr < 0 || newr >= n || newc < 0 || newc >= m) {
                            perimeter++;
                            continue;
                        }
                        if (grid[newr][newc] == 0) {
                            perimeter++;
                            continue;
                        }

                        if (grid[newr][newc] == 1 && vis[newr][newc] == -1) {
                            vis[newr][newc] = 1;
                            q.push({newr, newc});
                        }
                    }
                }
            }
        }

        return perimeter;
    }
};