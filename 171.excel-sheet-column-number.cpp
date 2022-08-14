/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for (int i = 0; i < columnTitle.length();i++)
            res = 26 * res + (columnTitle.at(i) - 'A' + 1);
        return res;
    }
};
// @lc code=end

