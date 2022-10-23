class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int orig = n*(n+1)/2;
        int dup = 0;
        unordered_map<int,int> m;
        for(auto i:nums)
        {
            m[i]++;
            if(m[i]>1) dup = i;
            orig -= i;
        }
        return {dup,orig+dup};
    }
};