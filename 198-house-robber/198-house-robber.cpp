class Solution {
public:
    // Memoization solution
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return fun(dp,nums,nums.size()-1);
    }
    int fun(vector<int>&dp,vector<int> a,int ind)
    {
        if(ind == 0) return a[0];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int take = a[ind] + fun(dp,a,ind-2);
        int notake = 0 + fun(dp,a,ind-1);
        
        return dp[ind]=max(take,notake);
    }
};