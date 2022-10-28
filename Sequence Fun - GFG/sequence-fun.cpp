//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
	int mod = 1e9 + 7;
		int NthTerm(int n){
		    // Code  here
		    long long int ans = 2;
		    if(n==1) return ans;
		    int i=2;
		    while(i<=n){
		        ans = (ans*i + 1)%mod;
		        i++;
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends