class Solution {
private:
int bfs(int i, int j, vector<vector<int>>& grid) {
    int area=0;
        grid[i][j] = 0;
        queue<pair<int, int>> q;
        q.push({i, j});
        area++;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, -1, 0, 1};
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int newr = cur.first + dr[i];
                int newc = cur.second + dc[i];

                if (newr >= 0 && newr < grid.size() && newc >= 0 && newc < grid[0].size()) {
                    if (grid[newr][newc] == 1) {
                        grid[newr][newc] = 0;
                        q.push({newr, newc});
                        area++;
                    }
                }
            }
        }
        return area;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea=0;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    int area=bfs(i, j, grid);
                    maxArea=max(maxArea, area);
                }
            }
        }
     return maxArea;   
    }
};
