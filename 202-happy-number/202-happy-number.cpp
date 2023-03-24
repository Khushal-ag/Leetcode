class Solution {
public:
    int helper(int n)
    {
        int sum = 0;
        while(n>0)
        {
            sum += (n%10) * (n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int s = n,f = n;
        do{
            s = helper(s);
            f = helper(helper(f));
        }while(s!=f);
        return s==1;
    }
};