class Solution {
public:
    int partitionString(string s) {
        unordered_set<int> temp;
        int c = 0;
        for(auto i : s)
        {
            if(temp.find(i)!=temp.end()){
                temp.clear();
                c++;
            } 
                temp.insert(i);
        }
        return c+1;
    }
};