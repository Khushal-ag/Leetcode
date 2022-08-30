/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:
    int change(int t, vector<int>& cs) {
        int dp[5001] = {1};
        for (auto c : cs)
            for (auto j = c; j <= t; ++j)
                dp[j] += dp[j - c];
        return dp[t];
    }
};
// @lc code=end

