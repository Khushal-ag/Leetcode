/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution {
public:
    double average(vector<int>& s) {
        return (accumulate(s.begin(),s.end(),0.)-*max_element(s.begin(),s.end())-*min_element(s.begin(),s.end())) / (s.size() - 2);
    }
};
// @lc code=end

