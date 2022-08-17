/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void swap(vector<int> &v ,int a,int b){
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
    }
    void sortColors(vector<int>& a) {
        int low = 0, mid = 0, high = a.size() - 1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a,mid,low);
                low++;
                mid++;
            }
            else if(a[mid]==1)
                mid++;
            else
            {
                swap(a, mid, high);
                high--;
            }
        }
    }
};
// @lc code=end

