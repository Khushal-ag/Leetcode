/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int c = 0;
        while (n > 0)
        {
            n /= 5;
            c += n;
        }
        return c;
    }
};
// @lc code=end

