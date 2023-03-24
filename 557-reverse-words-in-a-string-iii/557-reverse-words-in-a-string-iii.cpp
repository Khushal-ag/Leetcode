class Solution {
public:
    string reverseWords(string s){
        string ans = "";
        string temp = "";
        for(auto i:s)
        {
            if(i==' ')
            {
                reverse(temp.begin(),temp.end());
                ans = ans + temp;
                temp = "";
                ans += ' ';
            }
             else temp += i;
        }
        reverse(temp.begin(),temp.end());
        ans += temp;
        return ans;
    }
};