class Solution {
public:
    string reverseWords(string s) {
         int i=0,j=0;

        while(j<s.size()){
            if(s[j] == ' ' || j==s.size()-1){
                int k=j;
                if(j==s.size()-1) k =j+1;
                reverse(s.begin()+i,s.begin()+k);
                j++;
                i=j;
            }
            j++;
        }
        return s;
    }
};