class Solution {
public:
    int lcs(string& a, string& b,int n,int m,int dp[][1001])
    {
        if(n==0 || m==0) return 0;
        if(dp[n][m] != -1) return dp[n][m];
        if(a[n-1] == b[m-1]) 
            return dp[n][m] = 1 + lcs(a,b,n-1,m-1,dp);
        else return dp[n][m] = max(lcs(a,b,n-1,m,dp),lcs(a,b,n,m-1,dp));
    }
    int longestCommonSubsequence(string a, string b) {
        int n = a.size();
        int m = b.size();
        int dp[1001][1001];
        for(int i=0;i<1001;i++)
            for(int j=0;j<1001;j++)
                dp[i][j] = -1;
        return lcs(a,b,n,m,dp);
    }
};