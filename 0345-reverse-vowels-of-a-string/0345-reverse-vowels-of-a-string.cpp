class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        set<char> v = {'a','e','i','o','u','A','E','I','O','U'};
        for(auto i:s)
            if(v.find(i)!=v.end())
                st.push(i);
        string res = "";
        for(auto i:s){
            if(v.find(i)!=v.end())
            {
                res += st.top();
                if(!st.empty()) st.pop();
            }
            else res += i;
        }
        return res;
    }
};