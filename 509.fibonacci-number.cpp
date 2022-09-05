/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public:
    int cal(vector<int> &dp, int n)
    {
        if (n <= 1)
            return dp[n] = n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = cal(dp, n - 1) + cal(dp, n - 2);
    }
    int fib(int n)
    {
        vector<int> dp(n + 1, -1);
        return cal(dp, n);
    }
};
// @lc code=end
