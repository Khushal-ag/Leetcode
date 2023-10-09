class Solution {
public:
    int solve(vector<int> &nums1, vector<int> &nums2, int i, int j, bool flag, vector<vector<vector<int>>> &dp){
        if(i < 0 || j < 0)
        {
            if(flag == true) return 0;
            else return INT_MIN;
        }

        if(dp[i][j][flag] != -1) return dp[i][j][flag];

        int picked = solve(nums1, nums2, i-1, j-1, true, dp) + nums1[i] * nums2[j];
        int left = solve(nums1, nums2, i-1, j, flag, dp);
        int right = solve(nums1, nums2, i, j-1, flag, dp);

        return dp[i][j][flag] = max(picked, max(left, right)); 
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<vector<int>>> dp(nums1.size()+1, vector<vector<int>> (nums2.size()+1, vector<int>(2, -1)));
        return solve(nums1, nums2, nums1.size()-1, nums2.size()-1, false, dp);
    }
};