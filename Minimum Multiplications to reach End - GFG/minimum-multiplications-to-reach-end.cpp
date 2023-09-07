//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
       if (start == end) return 0;
    int mod = 1e5;
    vector<bool> vis(mod, false);
    queue<int> q;
    q.push(start);
    vis[start] = true;
    int steps = 0;

    while (!q.empty()) {
        int size = q.size();
        steps++;

        for (int i = 0; i < size; i++) {
            int current = q.front();
            q.pop();

            for (int j = 0; j < arr.size(); j++) {
                int product = (current * arr[j]) % mod;

                if (product == end) return steps;
                if (!vis[product]) {
                    q.push(product);
                    vis[product] = true;
                }
            }
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends