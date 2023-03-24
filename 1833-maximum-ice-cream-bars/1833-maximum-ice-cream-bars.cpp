class Solution {
public:
    int maxIceCream(vector<int>& c, int coins) {
        sort(c.begin(),c.end());
        int count = 0;
        if(c[0]>coins) return 0;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]>coins) break;
            coins -= c[i];
            count++;
        }
        return count;
    }
};