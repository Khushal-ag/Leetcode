/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> v;
        for (auto i : nums1)
                m[i]++;
        for (auto i : nums2)
        {
            if (m[i] > 0)
            {
                m[i]--;
                v.push_back(i);
            }
        }
        return v;
    }
};
// @lc code=end

