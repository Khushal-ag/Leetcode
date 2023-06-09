class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        for(int i=0;i<dp.size();i++)
            dp[i] = i;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                if(i*j>=0)
                    dp[i] = min(dp[i-j*j]+1,dp[i]);
            }
        }
        return dp[n];
    }
};