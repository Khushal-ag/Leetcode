//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, pair<int,int>>> q;
        q.push({0, source});
        
        while(q.size()){
            
            if(destination==q.front().second){
                return q.front().first;
            }
            
            int i = q.front().second.first;
            int j = q.front().second.second;
            int count = q.front().first;
            q.pop();
            
            if(i+1<m && grid[i+1][j]!=0){
                q.push({count+1,{i+1,j}});
                grid[i+1][j]=0;
            }
            
            if(j+1<n && grid[i][j+1]!=0){
                q.push({count+1,{i,j+1}});
                grid[i][j+1]=0;
            }
            
            if(i-1>=0 && grid[i-1][j]!=0){
                q.push({count+1,{i-1,j}});
                grid[i-1][j]=0;
            }
            
            if(j-1>=0 && grid[i][j-1]!=0){
                q.push({count+1,{i,j-1}});
                grid[i][j-1]=0;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends