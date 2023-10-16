class Solution {
public:
    vector<int> getRow(int ro) {
        long long curr=1;
        vector<int>ans={1};
        for(int r=1;r<=ro;r++){
            curr=(curr*(ro-r+1))/r;
            ans.push_back(curr);
        }
        return ans;
    }
};