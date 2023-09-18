class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int cnt=0;
    vector<pair<int,int>>v;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]==1) cnt++;
        }
        v.push_back({cnt,i});
        cnt=0;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++) v1.push_back(v[i].second);
    
    return v1;
    }
};