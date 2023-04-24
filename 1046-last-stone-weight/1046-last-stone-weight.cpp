class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n = s.size();
        if(n == 1) return s[0];
        sort(s.begin(), s.end());
        int i = n-1;
        while(i >= 1){
            if(s[i-1] == s[i])
                i = i - 2;
            else{
                s[i-1] = s[i] - s[i-1];
                i = i -1;
                int j = i;
                while( j > 0 and s[j-1] > s[j] ){
                    swap( s[j-1] , s[j] );
                    j--;
                }
            }
        }
        if( i == 0 )
            return s[i];
        else 
            return 0;
    }
};