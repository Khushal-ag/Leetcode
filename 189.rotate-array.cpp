/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate numsay
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        while(k--)
        {
            int curr = nums[size - 1];
            for (int i = size - 1; i > 0;i--)
            {
                nums[i] = nums[i - 1];
            }
            nums[0] = curr;        }
    }
};
// @lc code=end

