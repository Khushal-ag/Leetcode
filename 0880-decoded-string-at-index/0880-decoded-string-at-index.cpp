class Solution {
public:
    string decodeAtIndex(string s, int k) {
        vector<long> dlen(s.size());
       dlen[0] = 1;
       int i = 1 ;
       while(dlen[i - 1] < k){
           if(isalpha(s[i])){
               dlen[i] = 1 + dlen[i - 1];
           }else{
               dlen[i] = (s[i] - '0') * dlen[i - 1];
           }
           ++i;
       }
       --i;

       while(dlen[i] > k){
           --i;
           if(dlen[i] < k){
             k = ((k - 1) % dlen[i]) + 1;
           }
       }

       while(isdigit(s[i])) --i;
       return s.substr(i, 1);
    }
};