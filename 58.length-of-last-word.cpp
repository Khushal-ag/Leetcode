/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0,space = 0;
        for (int i = s.length() - 1; i >= 0;i--)
        {
            if(s[i]==' ' && space==1)
                return c;
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || s[i]>='0' && s[i]<='9')
            {
                c++;
                space = 1;
            }
        }
        return c;
    }
};
// @lc code=end

