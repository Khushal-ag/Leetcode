/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long int n = x,s = 0;
        while(n>0){
            s = s * 10 + n % 10;
            n /= 10;
        }
        if(s == x)
            return true;
        return false;
    }
};
// @lc code=end

