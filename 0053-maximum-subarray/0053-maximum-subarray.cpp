class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int maxsub = 0;
        for(auto i : nums)
        {
            maxsub += i;
            m = max(maxsub,m);
            if(maxsub<0) maxsub = 0;
        }
        return m;
    }
};