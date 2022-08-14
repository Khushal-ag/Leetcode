/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> m;
        int index = s.length();
        for (int i = 0; i < s.length();i++)
        {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for(auto [k,v]:m)
        {
            if(v.first == 1)
                index = min(index, v.second);
        }
        return index == s.length() ? -1 : index;
    }
};
// @lc code=end

