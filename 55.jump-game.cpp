/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return true;
        int max = 0;
        for (int i = 0; i < n - 1 && max >= i;i++)
        {
            if(max<i+nums[i])
                max = i + nums[i];
            if(max >= n-1)
                return true;
        }
        return false;
    }
};
// @lc code=end

