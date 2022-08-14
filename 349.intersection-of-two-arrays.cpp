/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> v;
        for(auto i:nums1)
            if(m[i]==0)
            m[i]++;
        for(auto i:nums2)
        {
            if(m[i]>0) {
                m[i]--;
                v.push_back(i);
            }    
        }
        return v;
    }
};
// @lc code=end

