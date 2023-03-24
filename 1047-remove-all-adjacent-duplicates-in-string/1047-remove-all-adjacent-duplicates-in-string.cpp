class Solution
{
    public:
        string removeDuplicates(string s)
        {
            string res = "";
            for (auto i: s)
            {
                if (res.size() && res.back() == i) res.pop_back();
                else res.push_back(i);
            }
            return res;
        }
};