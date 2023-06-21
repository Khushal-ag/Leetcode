class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,u = nums.size()-1;
        int ans = INT_MAX;
        while(l<=u)
        {
            int mid = l + (u-l)/2;
            if(nums[l]<=nums[mid]){
                ans = min(ans,nums[l]);
                l = mid+1;
            }
            else{
                u = mid-1;
                ans = min(ans,nums[mid]);
            }
        }
        return ans;
    }
};