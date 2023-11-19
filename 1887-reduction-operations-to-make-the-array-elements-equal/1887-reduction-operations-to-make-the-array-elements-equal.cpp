class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i = 0;
        for(auto it:mp){
            ans+=it.second*i;
            i++;
        }
        return ans;
    }
};