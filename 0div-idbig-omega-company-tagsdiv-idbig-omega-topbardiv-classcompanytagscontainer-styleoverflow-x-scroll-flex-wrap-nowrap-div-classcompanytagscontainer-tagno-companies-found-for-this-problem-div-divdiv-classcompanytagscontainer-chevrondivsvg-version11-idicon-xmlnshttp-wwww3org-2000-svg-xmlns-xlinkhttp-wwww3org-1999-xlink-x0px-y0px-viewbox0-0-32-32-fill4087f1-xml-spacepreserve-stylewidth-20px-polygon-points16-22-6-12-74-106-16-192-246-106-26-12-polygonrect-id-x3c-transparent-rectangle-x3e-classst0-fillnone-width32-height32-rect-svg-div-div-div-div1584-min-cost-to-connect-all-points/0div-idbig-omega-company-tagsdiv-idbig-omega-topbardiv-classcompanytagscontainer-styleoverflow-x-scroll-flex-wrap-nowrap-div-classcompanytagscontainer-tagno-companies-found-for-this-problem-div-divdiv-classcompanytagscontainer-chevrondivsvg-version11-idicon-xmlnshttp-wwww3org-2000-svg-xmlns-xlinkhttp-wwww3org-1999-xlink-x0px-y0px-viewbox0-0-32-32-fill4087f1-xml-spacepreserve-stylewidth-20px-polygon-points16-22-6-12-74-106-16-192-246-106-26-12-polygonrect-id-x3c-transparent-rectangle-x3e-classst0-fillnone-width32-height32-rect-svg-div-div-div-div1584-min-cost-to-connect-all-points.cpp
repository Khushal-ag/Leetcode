class Solution {
public:
   int minCostConnectPoints(vector<vector<int>>& points) {
         int n = points.size();
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

         vector<bool> arr(n);
         pq.push({0, 0});
         int mincost =0;
         int rem = 0;
         while(!pq.empty()) {
             auto it = pq.top();
             int weight = it.first;
             int currNode = it.second;
             pq.pop();
             if(arr[currNode]) {
                 continue;
             }

             arr[currNode] =true;
             mincost += weight;
             rem++;
             for(int i =0; i<n; i++) {
                 if(!arr[i]) {
                     int newWeight = abs(points[currNode][0] - points[i][0]) + 
                                     abs(points[currNode][1] - points[i][1]);
                      pq.push({newWeight, i});
                 }
             }
         }
         return mincost;
    }
};