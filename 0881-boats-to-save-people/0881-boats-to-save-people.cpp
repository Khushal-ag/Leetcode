class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int h = 0,l = p.size()-1,c = 0;
        while(h<=l)
        {
            if(p[h]+p[l] <= limit) h++;
            l--;
            c++;
        }
        return c;
    }
};