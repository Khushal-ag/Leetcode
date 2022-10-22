//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  
int solve(vector<int>&dp,int ind)

    {

        if(ind == 0)

        {

            return 1;

        }

        if(dp[ind]!=-1)

        {

            return dp[ind];

        }

        

        int left = solve(dp,ind-1)%100000000;

        int right = 0 ;

        if(ind > 1)

            right = solve(dp,ind-2)%100000000;

        return dp[ind] = (left + right)%100000000;

    }

  public:

    int fillingBucket(int N) {

        // code here

        vector<int>dp(N+1,-1);

        return solve(dp,N)%100000000;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends