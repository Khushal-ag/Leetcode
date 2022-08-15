/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        return fmod(log10(n) / log10(4), 1) == 0;
    }
};
// @lc code=end

