class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int d = 1;
        int left=0,right=m[0].size()-1,bottom=m.size()-1,top=0;
        while(left<=right && top<=bottom){
            if(d==1)
            {
                for(int i=left;i<=right;i++)
                    ans.push_back(m[top][i]);
                top++;
                d=2;
            }
            else if(d==2)
            {
                for(int i=top;i<=bottom;i++)
                    ans.push_back(m[i][right]);
                right--;
                d=3;
            }
            else if(d==3)
            {
                for(int i=right;i>=left;i--)
                    ans.push_back(m[bottom][i]);
                bottom--;
                d=4;
            }
            else if(d==4)
            {
                for(int i=bottom;i>=top;i--)
                    ans.push_back(m[i][left]);
                left++;
                d=1;
            }
        }
        return ans;
    }
};

