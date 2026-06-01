class Solution {
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<char>>& grid, int r, int c) {
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c] != '1') {
            return;
        }
        grid[r][c] = '2';
        for(int i=0; i<4;i++) {
            dfs(grid, r+dir[i][0], c+dir[i][1]);
        }
    }
};
