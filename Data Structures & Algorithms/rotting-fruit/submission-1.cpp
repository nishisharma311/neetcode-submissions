class Solution {
    int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        queue<pair<int,int>> pq;
        int ans = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2) {
                    pq.push({i,j});
                }
            }
        }
        while(!pq.empty()) {
            int size=pq.size();
            int tmp=0;
            while(size--) {
                auto p=pq.front();
                pq.pop();
                for(int k=0; k<4; k++) {
                    int r = p.first + dir[k][0], c = p.second + dir[k][1];
                    if(r>=0 and c>=0 and r <n and c<m and grid[r][c] == 1) {
                        grid[r][c] = 2;
                        pq.push({r,c});
                        tmp = 1;
                    }
                }
            }
            ans += tmp;
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        
        return ans;
    }
};
