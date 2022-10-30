//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    	    vector<long long int> vec,sub;
	    long long int curr=1;
	    sub.push_back(0);
	    sub.push_back(1);
	    for(int i=1;i<n;i++){
	       if(i>=5){
	            curr=curr-sub[i-5];
	        }
	        sub.push_back(curr*2);
	        curr=curr+curr*2;
	    }
	    return curr;

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends