class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long total=0;
        int left=0,maxFreq=0;
        for(int right=0;right<nums.size();right++){
            total+=nums[right];

            while(static_cast<long long>(nums[right])*(right-left+1)-total>k){
                total-=nums[left++];
            }
            maxFreq=max(maxFreq,right-left+1);
        }
return maxFreq;
    }
};