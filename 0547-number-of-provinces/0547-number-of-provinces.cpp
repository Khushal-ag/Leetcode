class Solution {
public:
    void dfs(vector<vector<int>> &isConnected , vector<int> &vis ,int i)
{
    vis[i]=1;
    for(int j=0;j<isConnected.size();j++)
    {
        if(isConnected[i][j]==1 && !vis[j])
        dfs(isConnected,vis,j);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<int> vis(n,0);

        if(n==0)
        return 0;

        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(isConnected,vis,i);
            }
        }
        return ans;
    }
};