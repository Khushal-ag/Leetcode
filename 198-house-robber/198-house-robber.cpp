class Solution {
public:
    // Tabulation solution + space optimised O(1)
    int chk(vector<int>& a,int n,vector<int>& dp)
    {
        if(n==0) return a[0];
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int take = a[n] + chk(a,n-2,dp);
        int notake = chk(a,n-1,dp);
        return dp[n] = max(take,notake);
    }
    int rob(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n+1,-1);
        return chk(a,n-1,dp);
    }
};