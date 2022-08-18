/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, u = n, mid;
        while(l<u)
        {
            mid = l + (u-l)/2;
            if(!(isBadVersion(mid)))
                l = mid + 1;
            else
                u = mid;
        }
        return l;
    }
};
// @lc code=end

