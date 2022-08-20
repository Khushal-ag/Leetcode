/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long int s = 0;
        while(x){
            int temp = s * 10 + x % 10;
            if (temp / 10 != s)
                return 0;
            s = temp;
            x /= 10;
        }
        return s;
    }
};
// @lc code=end

