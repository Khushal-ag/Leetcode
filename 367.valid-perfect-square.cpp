/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int l = 1, h = num, mid;
        while (l<=h )
        {
            mid = l + (h - l) / 2;
            if(mid*mid == num)
                return true;
            if(mid*mid > num)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return false;
        }
};
// @lc code=end

