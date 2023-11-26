class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int row(matrix.size()),col(matrix[0].size());
        vector<vector<int>>vals(row,vector<int>(col,0));

        for(int i=0;i<col;i++){
            int cnt{};
            for(int j=row-1;j>=0;j--){
                if(matrix[j][i]==1){
                    cnt++;
                }else{
                    cnt=0;
                }
                vals[j][i]=cnt;
            }
        }
        int ans{};
        for(int i=0;i<row;i++){
            vector<int>temp=vals[i];
            sort(temp.begin(),temp.end(),greater<int>());
            for(int j=0;j<col;j++){
                ans=max(ans,temp[j]*(j+1));
            }
        }
        return ans;
    }
};