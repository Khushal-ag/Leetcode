class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = nums[0];
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m)
        {
            if(i.second==1) unique = i.first;
        }
        return unique;
    }
};