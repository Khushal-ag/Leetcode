class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        int mine = INT_MAX,c=0;
        for(auto [p,v]:m)
        {
            if(v.first==1) {
                c = 1;
                mine = min(mine,v.second);
            }
        }
        if(c==1) return mine;
        else return -1;
    }
};