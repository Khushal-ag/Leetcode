class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),prefixSum=0,suffixSum=0;
        vector<int> ans(n);

        for(int num=1;num<n;num++){
          prefixSum=prefixSum+nums[num-1];
          ans[num]=((num-0)*nums[num] - prefixSum);
        }
        
        for(int num=n-2;num>=0;num--){
          suffixSum=suffixSum+nums[num+1];
          ans[num] += (suffixSum - (n-1-num)*nums[num]);
        }
        
        return ans;

    }
};