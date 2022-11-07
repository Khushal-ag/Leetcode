class Solution
{
    public:
        int maximum69Number(int n)
        {
            vector<int> v;
            while (n > 0)
            {
                v.push_back(n % 10);
                n /= 10;
            }
            reverse(v.begin(), v.end());
            int s = 0,res = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == 6 && s == 0)
                {
                    v[i] = 9;
                    s = 1;
                }
                res = res*10+v[i];
            }
            return res;
        }
};