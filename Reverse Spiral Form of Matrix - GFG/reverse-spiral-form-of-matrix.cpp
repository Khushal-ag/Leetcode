//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&matrix)  {
        // code here
           vector<int> vc;

        //int r = matrix.size();

        //int c = matrix[0].size();

       int top=0, down = r-1,left=0,right=c-1,dir=0;

       while(left<=right && top<=down){

           if(dir==0){ // ---

               for(int i=left;i<=right;i++){

                   vc.push_back(matrix[top][i]);

               }

               top += 1;

           }

           else if(dir==1){

               for(int i=top;i<=down;i++){

                   vc.push_back(matrix[i][right]);

               }

               right -= 1;

           }

           else if(dir==2){

               for(int i=right;i>=left;i--){

                   vc.push_back(matrix[down][i]);

               }

               down -= 1;

           }

           else if(dir==3){

               for(int i=down;i>=top;i--){

                   vc.push_back(matrix[i][left]);

               }

               left += 1;

           }

           dir = (dir + 1) %4;

           

       }

       reverse(vc.begin(),vc.end());

       return vc;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends