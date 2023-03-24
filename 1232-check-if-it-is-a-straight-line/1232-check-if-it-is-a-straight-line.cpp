class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int dx = c[1][0]-c[0][0];
        int dy = c[1][1]-c[0][1];
        for(int i=2;i<c.size();i++)
        {
            auto a = c[i];
            if(dx*(a[1]-c[0][1]) != dy*(a[0]-c[0][0])) return false;
        }
        return true;
    }
};