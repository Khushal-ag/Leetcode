class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX;
        int today = 0;
        int overall = 0;
        for(auto i:prices)
        {
            least = min(i, least);
            today = i - least;
            overall = max(overall, today);
        }
        return overall;
    }
};