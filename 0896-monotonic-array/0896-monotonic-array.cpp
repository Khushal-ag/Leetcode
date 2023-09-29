class Solution
{
    public:
        bool isMonotonic(vector<int> &nums)
        {
            vector<int> inc = nums;
            vector<int> dec = nums;
            sort(inc.begin(), inc.end());
            sort(dec.rbegin(), dec.rend());
            if (nums == inc || nums == dec) return true;
            else return false;
        }
};