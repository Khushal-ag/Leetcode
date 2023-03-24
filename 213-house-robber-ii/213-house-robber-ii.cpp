class Solution {
public:
    int fun(vector<int> v)
    {
        int prev = v[0];
        int prev2 = 0;
        for(int i=1;i<v.size();i++)
        {
            int take = v[i];
            if(i>1) take += prev2;
            int notake = prev;
            int curr = max(take,notake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }
        return max(fun(temp1),fun(temp2));
    }
};