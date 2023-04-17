class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        if(v.size()<2) return v;
        vector<int> temp = v[0];
        int start = temp[0];
        int end = temp[1];
        for(int i=1;i<v.size();i++)
        {
            vector<int> curr = v[i];
            if(curr[0]<= end) end = max(curr[1],end);
            else {
                ans.push_back({start,end});
                start = curr[0];
                end = curr[1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};