class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n);
        int sum = 0;
        for(auto i:nums)
            if(i%2==0) sum += i;
        for(int i=0;i<n;i++)
        {
            if(abs(queries[i][0]+nums[queries[i][1]])%2==0){
                if(abs(nums[queries[i][1]])%2==0) sum += queries[i][0];
                else sum = sum + queries[i][0]+nums[queries[i][1]];
            }
            else{
                if(nums[queries[i][1]]%2==0) sum -= nums[queries[i][1]];
            }
            nums[queries[i][1]] += queries[i][0];
            ans[i] = sum;
        }
        return ans;
    }
};