class Solution {
    public int findCenter(int[][] edges) {
       // int edge= = edges.size();
        int n= edges.length + 1;
        int[] Count = new int[n+1];
        for(int[] edge : edges){
        int x= edge[0];
        int y = edge[1];
        Count[x]++;
        Count[y]++;
            if(Count[x]>1){
                return x;
            }
            if(Count[y]>1){
                return y;
            }
        }
        return 0;
        
    }
}