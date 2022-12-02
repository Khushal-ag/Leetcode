class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> w1(26,0),w2(26,0),s1(26,0),s2(26,0);
        for(auto i:word1)
        {
            w1[i-'a']++;
            s1[i-'a']=1;
        }
        for(auto i:word2)
        {
            w2[i-'a']++;
            s2[i-'a']=1;
        }
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        return w1==w2 && s1==s2;
    }
};