class Solution
{
    public:
        vector<int> searchRange(vector<int> &nums, int target)
        {
            auto beg = nums.begin(), end = nums.end();
            int first = lower_bound(beg, end, target) - beg;
            if (first == nums.size() || nums[first] != target) return { -1,-1 };
            int last = upper_bound(beg, end, target) - beg - 1;
            return {first,last};
        }
};