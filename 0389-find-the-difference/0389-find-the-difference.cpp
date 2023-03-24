class Solution {
public:
    char findTheDifference(string s, string t) {
        string res = s+t;
        unordered_map<char,int> m;
        for(auto i:res)
            m[i]++;
        for(auto [i,j]:m)
        {
            if(j%2==1) return i;
        }
        return ' ';

    }
};