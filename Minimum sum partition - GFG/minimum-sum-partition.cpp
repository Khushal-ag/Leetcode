//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  private:
    vector<vector<int>>dp;
    int ans = INT_MAX;
    
    int rec(int arr[], int n, int i, int sum, int left) {
        if(i == n)
            return ans = min(ans, abs(sum - left));
        
        
        if(dp[i][left] != -1)
            return dp[i][left];
        
        return dp[i][left] = min (
                rec(arr, n, i + 1, sum - arr[i], left + arr[i]), 
                rec(arr, n, i + 1, sum, left)
            );
    }
    
  public:
	int minDifference(int arr[], int n) {
	    if(n == 1)
	        return arr[0];
	        
	    
	    int sum = accumulate(arr, arr + n, 0);
	    dp.resize(n , vector<int>(sum, -1));
	    
	    return rec(arr, n, 0, sum, 0);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends