/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        int c = 0;
        for(auto i:jewels)
            m[i]++;
        for(auto i:stones)
        {
            if(m[i]>0)
                c++;
        }
        return c;
    }
};
// @lc code=en