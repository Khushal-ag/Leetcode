class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>s;
// For the minimum value in vector..
        int min= INT_MIN;
        for (int i=nums.size()-1; i>=0;i--){
            // dont take tension for last condition min is 0 so min is going to be updated by s.top() so automatically we get our ans..
            if(nums[i]<min){
                return true;
            }

            // stack will always contain the max value..
               while(!s.empty() && s.top()< nums[i]){
                   min= s.top();
                   s.pop();
               }
            
s.push(nums[i]);

        }
        
    return false;
    }
};