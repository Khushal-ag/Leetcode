/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        if(x < -1*pow(2,31) && x > pow(2,31))
            return 0;
        long int s = 0,t = abs(x);
        while(t>0){
            s = s * 10 + t % 10;
            t /= 10;
        }
        if(x<0)
            return s * -1;
        else
            return s;
    }
};
// @lc code=end

