class Solution {
public:
    void func(vector<int>& arr,int n)
    {
        if(n>1)
            func(arr,n/2);
        arr.push_back(n%2);
    }
    int minimumOneBitOperations(int n) {
        if(n==0)return 0;
        vector<int>bin;
        func(bin,n);
        int sz=bin.size();
        bool flag=true;
        int res=0;
        for(int i=0;i<sz;i++)
        {
            if(bin[i])
            {
                int exp = (int)pow(2,sz-i);
                cout<<exp<<endl;
                if(flag)
                {
                    res+=(exp-1);
                }
                else 
                {
                    res-=(exp-1);
                }
                flag=!flag;
            }
        }
        return res;
    }
};