class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();
        vector<vector<int>>ans(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
                 for (int j = 0; j < n; j++)
                {
                int x = i+1; int y = j+1;
                     set<int>st1;
                     while(x<m &&y<n){
                         st1.insert(grid[x][y]);
                         x++;
                         y++;
                     }
                     x = i - 1; y = j - 1;
                set<int>st2;
                     while(x >= 0 && y >= 0){
                         st2.insert(grid[x][y]);
                         x--;
                         y--;
                     }
                     
                     
                     int topLeft = st1.size(), bottomRight = st2.size();
                     ans[i][j] = abs(topLeft - bottomRight);
             }
        }
        return ans;
    }
};