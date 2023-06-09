class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        char ans = '0';
        for(auto i:l)
        {
            if(i>t){
                ans = i;
                break;
            }
        }
        return ans=='0'?l[0]:ans;
    }
};