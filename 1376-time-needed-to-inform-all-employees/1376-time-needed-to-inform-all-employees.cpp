class Solution {
public:
    int dfs(int idx, vector<vector<int>> &graph, vector<int> &t, vector<int> &vis){
      vis[idx] = true;
      int ans = t[idx], mx = 0;
      for(auto i: graph[idx]){
        if(!vis[i]) mx = max(mx, dfs(i, graph, t, vis));
      }
      return ans+mx;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> graph(n, vector<int> ());

        int idx = 0;
        for(int i=0; i<n; i++){
          if(manager[i]==-1) idx = i;
          else{
            graph[manager[i]].push_back(i);
            graph[i].push_back(manager[i]);
          }
        }

        vector<int> vis(n,false);
        return dfs(idx,graph, informTime, vis);
    }
};