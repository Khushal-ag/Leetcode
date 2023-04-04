class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;

    void helper(vector<int> &nums, vector<bool> &freq)
    {
        if (temp.size() == nums.size())
        {
            res.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                freq[i] = true;
                temp.push_back(nums[i]);
                helper(nums, freq);
                temp.pop_back();
                freq[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<bool> freq(n, false);
        helper(nums, freq);

        return res;
    }
};