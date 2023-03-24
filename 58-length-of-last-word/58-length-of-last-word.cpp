class Solution {
public:
    int lengthOfLastWord(string s) {
        int read = 0,c = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' '){
                c++;
                read = 1;
            }
            else if(s[i]==' '&& read == 1)
            {
                read = 0;
                break;
            }
        }
        return c;
    }
};