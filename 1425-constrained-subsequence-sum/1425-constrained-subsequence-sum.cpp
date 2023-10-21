class Solution {
public:
    int full_max = 0;
int max_sum(std::vector<int>& sum, int i, int& k)
{
    
    if (i - k < 1)
    {
        if (sum[i - 1] > full_max) 
        {
            full_max = sum[i - 1];
        }
    }
    else
    {
        if (sum[i - k - 1] != full_max)
        {

            if (sum[i - 1] > full_max)
                full_max = sum[i - 1];
        }
        else
        {
            if (sum[i - 1] > full_max) full_max = sum[i - 1];
            int left_max = full_max;
            full_max = 0;
            for (int j = 1; j != k + 1 && i - j > -1; ++j)
            {
                if (sum[i - j] == left_max)
                {
                    full_max = left_max;
                    break;
                }
                if (sum[i - j] > full_max) full_max = sum[i - j];
            }
        }
    }
    return full_max;
}
int constrainedSubsetSum(vector<int>& nums, int k)
{
    std::vector<int> sum({ nums[0] });
    int max = nums[0];
    for (int i = 1; i != nums.size(); ++i)
    {
        sum.push_back(nums[i] + max_sum(sum, i, k));
        if (sum[i] > max) max = sum[i];
    }
    return max;
}
};