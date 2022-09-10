class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return rec(dp,n);
    }
    int rec(vector<int>& dp,int n)
    {
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n] = rec(dp,n-1) + rec(dp,n-2);
        return dp[n];
    }
};