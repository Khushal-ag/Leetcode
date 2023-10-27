class Solution {
public:
     bool ispalindrome(string s1,int i,int j){
      while(i<j){
          if(s1[i]!=s1[j])return false;
          i++;j--;
      }
      return true;
  }
    string longestPalindrome(string s) {
        int n=s.length();
        int len=0;
      
        string ans;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                if(s[i]==s[j] and j-i+1>len and ispalindrome(s,i,j)){
                    if(j-i+1>len){
                        len=j-i+1;
                        ans=s.substr(i,j-i+1);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};