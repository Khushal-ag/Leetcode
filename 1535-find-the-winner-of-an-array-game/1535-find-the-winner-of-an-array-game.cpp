class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int count = 0, i = 0, j = 1;
        while (count < k && j < arr.size()) {  
            if (arr[i] > arr[j]) {  
                count++;  
                j++;  
            } else {  
                count = 1;  
                i = j;  
                j = i + 1;  
            }
        }
        return arr[i]; 
    }
};