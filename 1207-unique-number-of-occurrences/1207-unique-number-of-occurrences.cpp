class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s;
        map<int,int> m;
        for(auto i:arr)
        {
            m[i]++;
            
        }
        for(auto [i,j] : m)
            s.insert(j);
        return m.size()==s.size();
    }
};