class Solution
{
    public:

        void dfs(int node, vector<int> adj[], vector<int> &vis)
        {
            vis[node] = 1;
            for (auto i: adj[node])
            {
                if (!vis[i])
                {
                    dfs(i, adj, vis);
                }
            }
        }
    int findCircleNum(vector<vector<int>> &c)
    {
        int n = c.size();
        int m = c[0].size();
        vector<int> adj[n];

        vector<int> vis(n,0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (c[i][j] == 1 && i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int ans = 0;
        for (int k = 0; k < n; k++)
        {
            if (!vis[k])
            {
                ans++;
                dfs(k, adj, vis);
            }
        }
        return ans;
    }
};