class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
            m[B[i]]++;
            ans.push_back(2*(i+1) - m.size());
        }
        return ans;
    }
};