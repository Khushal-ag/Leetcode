const int M = 1e9+7;
int mat[4][3];
vector<tuple<int,int>> dz = 
    {{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
bool isValid(int i, int j){
    return i>=0 and j>=0 and i<4 and j<3;
}
int dp[5010][5][4];
class Solution {
public:

    int f(int n, int i, int j){
        if(!isValid(i,j)) return 0;
        if(dp[n][i][j] != -1) return dp[n][i][j];
        if(mat[i][j]==0) return  dp[n][i][j] = 0;
        if(n==0) return dp[n][i][j] = 1;

        long long ans=0;
        for(auto [dx,dy] : dz){
            auto x = i+dx, y=j+dy;
            ans = (ans+f(n-1, x,y)) %M;
        }
        return dp[n][i][j] = ans;
    }


    int knightDialer(int n) {
        memset(mat,1,sizeof(mat)); mat[3][0] = mat[3][2] = 0;
        memset(dp,-1,sizeof(dp));

        int ans=0;
        for(int i=0; i<4; i++)
        for(int j=0; j<3; j++){
            ans = (ans+f(n-1,i,j))%M;
        }
        
        return ans;
    }
    
};