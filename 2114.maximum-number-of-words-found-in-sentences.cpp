/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

// @lc code=start
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mw = 0;
        for(auto i:sentences)
        {
            mw = max(mw, count_word(i));
        }
        return mw;
    }
    int count_word(string s)
    {
        int c = 1;
        for(auto i:s)
        {
            if(i == ' ')
                c++;
        }
        return c;
    }
};
// @lc code=end

