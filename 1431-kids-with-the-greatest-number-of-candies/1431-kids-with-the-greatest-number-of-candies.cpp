class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool> ans;
        int m = *max_element(c.begin(),c.end());
        for(auto i:c)
            if((i+e) >= m) ans.push_back(true);
            else ans.push_back(false);
        return ans;
    }
};