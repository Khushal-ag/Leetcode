class Solution {
public:
   int dfs(int node, vector<int> adj[], vector<int>& vis){
        vis[node] = 1;
        int ans = 1;
        for(auto&i:adj[node]){
            if(!vis[i]){
                ans += dfs(i, adj, vis);
            }
        }
        return ans;
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<int> adj[n];
        for(int i = 0; i < n; i++){
            long long u = bombs[i][0], v = bombs[i][1], dist = bombs[i][2];
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                long long x = bombs[j][0], y = bombs[j][1];
                if(sqrt((u - x)*(u - x) + (v - y)*(v - y)) <= dist){
                    adj[i].push_back(j);
                }
            }
        }
        int ans = 1;
        for(int i = 0; i < n; i++){
            vector<int> vis(n);
            ans = max(ans, dfs(i, adj, vis));
        }
        return ans;
    }
};