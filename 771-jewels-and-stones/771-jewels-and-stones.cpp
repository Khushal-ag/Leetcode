class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(auto i:jewels)
            m[i]++;
        int c = 0;
        for(auto i:stones)
            if(m[i]==1) c++;
        return c;
    }
};