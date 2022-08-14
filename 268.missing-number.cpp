/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 0;
        for(auto i:nums)
        {
            if(j!=i)
                return j;
            j++;
        }
        return nums.size();
    }
};
// @lc code=end

