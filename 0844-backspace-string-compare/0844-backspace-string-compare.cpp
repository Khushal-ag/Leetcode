class Solution {
public:
   bool backspaceCompare(string s, string t) {
        string s1 = "";
        string t1 = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#') {
                if (!s1.empty())
                    s1.pop_back();
            }
            else {
                s1.push_back(s[i]);
            }
        }

        // Process string t
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == '#') {
                if (!t1.empty())
                    t1.pop_back();
            }
            else {
                t1.push_back(t[i]);
            }
        }

        if (s1.size() != t1.size())
            return false;

        for(int i = 0; i < s1.size(); i++) {
            if (s1[i] != t1[i])
                return false;
        }

        return true;
    }
};