class Solution {
public:
    int mod=1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int>m;
        int ind=0;
        for(auto &it:arr){
            m[it]=ind;
            ind++;
        }
        vector<long long int>dp(arr.size(),1);
        for(int i=1;i<arr.size();i++){
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                   if(m.find((arr[i]/arr[j]))!=m.end()){
                      long long tempVal=dp[j]*dp[m[(arr[i]/arr[j])]];
                        dp[i]=(dp[i]+tempVal)%mod;
                   }
                }
            }
        }
    
    long long int sum=0;
    for(int i=0;i<dp.size();i++){
        sum=(sum+dp[i])%mod;
    }
    return sum;
    }
};