/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int c = 1;
        for (int i = 1; i < nums.size();i++)
        {
            if(nums[i]==a)
                c++;
            else{
                if(c>nums.size()/2)
                    break;
                a = nums[i];
                c = 1;
            }
        }
        return a;
    }
};
// @lc code=end

