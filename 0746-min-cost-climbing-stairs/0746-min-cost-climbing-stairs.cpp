class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int cost_size = cost.size();
        if(cost_size==0) return 0;
        if(cost_size==1) return cost[0];

        int f1 = 0,f2=0,f3=0;
        for(int i = 2;i<=cost_size;++i){
            f3 = min(f1 + cost[i-2], f2 + cost[i-1]);
            f1 = f2;
            f2 = f3;
        }

        return f3;
    }
};