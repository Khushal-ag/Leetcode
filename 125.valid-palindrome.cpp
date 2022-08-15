/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(auto& i:s)
        {
            if(i>='A'&&i<='Z'){
                i += 32;
                res += i;
            }
            else if(i>='a' && i<='z' || i>='0' && i<='9')
                res += i;
        }
        for (int i = 0, j = res.length() - 1; i < j;i++,j--)
        {
            if(res[i]!=res[j])
                return false;
        }
        return true;
    }
};
// @lc code=end

