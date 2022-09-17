class Solution {
public:
    // Tabulation solution + space optimised O(1)
    int rob(vector<int>& a) {
        int n = a.size();
        int prev = a[0];
        int prev2 = 0;
        for(int i=1;i<n;i++)
        {
            int take = a[i];
            if(i>1) take += prev2;
            int notake = 0 + prev;
            int curr = max(take,notake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};