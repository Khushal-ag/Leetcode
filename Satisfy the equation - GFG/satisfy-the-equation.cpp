//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int arr[], int N) {
        // code here
         map<pair<int,int>,int> mp;

        vector<int> ans;

        for(int i=0;i<N;i++)

        {

            for(int j=i+1;j<N;j++)

            {

                int sum=arr[i]+arr[j];

                mp[{i,j}]=sum;

            }

        }

        

        for(auto x:mp)

        {

            for(auto xx:mp)

            {

                if(x.second==xx.second && x.first.first!=xx.first.first && x.first.second!=xx.first.second && x.first.second!=xx.first.first)

                {

                    ans.push_back(x.first.first);

                    ans.push_back(x.first.second);

                    ans.push_back(xx.first.first);

                    ans.push_back(xx.first.second);

                    return ans;

                }

            }

        }

        

        return {-1,-1,-1,-1};
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends