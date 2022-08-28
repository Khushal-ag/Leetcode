/*
 * @lc app=leetcode id=1752 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int c = 0;
        for (int i = 0; i < size;i++)
        {
            if(nums[i]>nums[(i+1)%size])
                c++;
        }
        return c <= 1;
    }
};
// @lc code=end

