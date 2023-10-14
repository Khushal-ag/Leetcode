class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        int memo[501][501] = {};

        function<int(int, int)> dfs = [&](int i, int remainWalls){
            if(remainWalls <= 0) return 0;
            if(i >= n) return (int)1e9;
            if(memo[i][remainWalls]) return memo[i][remainWalls];
            int take = cost[i] + dfs(i+1, remainWalls-time[i]-1);
            int notTake = dfs(i+1, remainWalls);
            return memo[i][remainWalls] = min(take, notTake);
        };
        return dfs(0, n);
    }
};