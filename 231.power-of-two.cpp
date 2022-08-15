/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return fmod(log10(n) / log10(2), 1) == 0;
    }
};
// @lc code=end

