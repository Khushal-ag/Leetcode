//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void dfs( vector<vector<int>>& v,int l,int i,int j,int n,int m){
      if(i<0 || i>=n || j<0 || j>=m || v[i][j]!=l)
      return ;
      v[i][j]+=1;

      dfs(v,l,i+1,j,n,m);

      dfs(v,l,i,j+1,n,m);

      dfs(v,l,i-1,j,n,m);

      dfs(v,l,i,j-1,n,m);

  }

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        vector<int> ans;

        vector<vector<int>> v(n,vector<int> (m,0));
        int l=1;

        for(auto &it :operators){

            v[it[0]][it[1]]=l;

             int ct=0;

          for(int i=0;i<n;i++){

              for(int j=0;j<m;j++)

              {

                  if(v[i][j]==l){

                      dfs(v,l,i,j,n,m);

                      ct++;

                  }

              }
          }

          l++;

          ans.push_back(ct);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends