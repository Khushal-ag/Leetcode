/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        int temp = n;
        while (1)
        {
            while(temp>0){
                sum += pow(temp % 10, 2);
                temp /= 10;
            }
            temp = sum;
            sum = 0;
            if(temp == n)
                return false;
            else if(temp == 1)
                return true;
        }
        
    }
};
// @lc code=end

