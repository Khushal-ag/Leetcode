class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k) return k;
        for(auto i:arr){
            if(i<=k) k++;
            else break;
        }
        return k;
    }
};