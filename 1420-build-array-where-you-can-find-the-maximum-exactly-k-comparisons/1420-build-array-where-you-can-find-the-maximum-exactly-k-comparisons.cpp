class Solution {
public:
    int mod=1e9+7;
    int solve(int n, int m,int k, int step, int ind, int prev,
    vector<vector<vector<int>>>&dp){

        if(ind==n){
            if(step==k) return 1;
            return 0;
        }
        if(dp[ind][step][prev+1]!=-1) return dp[ind][step][prev+1];


        int val=0;
        for(int i=1; i<=m; i++){
            if(prev==-1 || i>prev){
                val=(val%mod + solve(n,m,k,step+1,ind+1,i,dp)%mod)%mod;
            }
            else{
                val=(val%mod+ solve(n,m,k,step,ind+1,prev,dp)%mod)%mod;
            }
        }

        return dp[ind][step][prev+1]= val%mod;
    }
    int numOfArrays(int n, int m, int k) {
        vector<vector<vector<int>>> dp(n+2,
        vector<vector<int>>(n+2,vector<int>(m+2,-1)));
        return solve(n,m,k,0,0,-1,dp)%mod;
    }
};