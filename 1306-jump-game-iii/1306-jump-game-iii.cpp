class Solution
{
    public:
        bool canReach(vector<int> &a, int s)
        {
            if (s >= 0 && s < a.size() && a[s] >= 0)
            {
                if (a[s] == 0) return true;
                a[s] = -a[s];
                return canReach(a, s + a[s]) || canReach(a, s - a[s]);
            }
            return false;
        }
};