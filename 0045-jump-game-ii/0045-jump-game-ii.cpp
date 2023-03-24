class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0,r=0,res = 0;
        while(r<nums.size()-1)
        {
            int max_reach = 0;
            for(int i=l;i<=r;i++)
                max_reach = max(max_reach,i+nums[i]);
            l = r+1;
            r = max_reach;
            res++;
        }
        return res;
    }
};