class Solution {
public:
    bool dfs_cycle(int node, vector<int>& leftChild, vector<int>& rightChild,vector<int>&visited){
        if(visited[node]==true) return true;
        visited[node]=true;
   
        if(leftChild[node]!=-1 &&dfs_cycle(leftChild[node],leftChild,rightChild,visited))
            return true;
    
        int rc=rightChild[node];
        if(rc!=-1 && dfs_cycle(rc,leftChild,rightChild,visited))
            return true;
        
        return false;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> visited(n+1,0);
        int root =0;
        vector<int> indegree(n,0);
        for(int i=0; i<n; i++){
            if(leftChild[i]!=-1)indegree[leftChild[i]]++;
            if(rightChild[i]!=-1)indegree[rightChild[i]]++;
        }
        for(int i=0; i<n; i++){
           if(indegree[i]==0)
           {
                root = i;
                break;
           }
        }
        if(dfs_cycle(root,leftChild,rightChild,visited))
            return false;
    
        for(int i=0; i<n; i++){
                if(!visited[i])return false;
        }
        return true;
    }
};