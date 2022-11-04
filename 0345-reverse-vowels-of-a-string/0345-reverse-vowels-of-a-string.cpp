class Solution {
public:
    string reverseVowels(string s) {
        int l = 0,h = s.size()-1;
        set<char> v = {'a','e','i','o','u','A','E','I','O','U'};
        while(l<h)
        {
            if(v.find(s[l])!=v.end()&&v.find(s[h])!=v.end())
            {
                swap(s[l],s[h]);
                l++;
                h--;
            }
            if(v.find(s[l])==v.end())
                l++;
            if(v.find(s[h])==v.end())
                h--;
        }
        return s;
    }
};