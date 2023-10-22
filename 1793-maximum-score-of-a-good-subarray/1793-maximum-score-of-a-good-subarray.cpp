class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int mini = nums[k], i = k, j = k;
        int n = nums.size();
        int ans = mini;
        while(i > 0 or j < n - 1){
            if((i > 0 ? nums[i - 1] : 0) < (j < n - 1 ? nums[j + 1] : 0))
                mini = min(mini, nums[++j]);
            else
                mini = min(mini, nums[--i]);
            ans = max(ans, mini * (j - i + 1));
        }
        return (int)ans;
    }
};