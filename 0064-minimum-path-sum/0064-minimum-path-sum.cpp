class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp,int n,int m)
    {
        if(i==n-1&&j==m-1) return grid[i][j];
        if(i>n-1||j>m-1) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int down = grid[i][j] + f(i+1,j,grid,dp,n,m);
        int right = grid[i][j] + f(i,j+1,grid,dp,n,m);
        return dp[i][j] = min(down,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(0,0,grid,dp,n,m);
    }
};