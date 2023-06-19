class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0,max_sum=0;
        for(auto i:gain)
        {
            sum += i;
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};