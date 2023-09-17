class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<bool>> visited(1<<n, vector<bool>(n));
        
        queue<pair<int, int>> q;
        for (int node = 0;node<n;node++) {
            visited[1<<node][node] = true;
            q.push({1<<node, node});
        }
        int steps = 0;
        while(!q.empty()) {
            int p = q.size();
            for(int i = 0;i<p;i++) {
                int curr_mask = q.front().first;
                int curr_node = q.front().second;
                q.pop();

                if(curr_mask == ((1<<n) - 1)) {
                    return steps;
                }

                for(int child: graph[curr_node]) {
                    int child_mask = (curr_mask | 1<<child);

                    if(visited[child_mask][child]) continue;
                    visited[child_mask][child] = true;

                    q.push({child_mask, child});
                } 
            }
            steps++;
        }
        return -1; // control never reaches here, as it is always possible to visit all edges
    }
};