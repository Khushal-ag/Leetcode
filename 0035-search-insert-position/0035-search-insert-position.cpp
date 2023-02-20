class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size(), mid,minindex = nums.size()-1;
        if(target>nums[h-1])
            return h;
        else if (target < nums[l])
            return l;
        while(l<=h)
        {
            mid = l + (h - l) / 2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                h = mid - 1;
                minindex = min(minindex, mid);
            }
            else
                l = mid + 1;
        }
        return minindex;
    }
};