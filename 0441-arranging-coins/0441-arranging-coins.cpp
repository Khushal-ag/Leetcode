class Solution
{
    public:
        int arrangeCoins(int n)
        {
            long long int low = 1;
            long long int high = n;
            while (low <= high)
            {
                long long int mid = low + (high - low) / 2;
                long long int mid_sum = (mid *(mid + 1)) / 2;
                if (mid_sum == n) return mid;
                if (mid_sum > n)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            return low - 1;
        }
};