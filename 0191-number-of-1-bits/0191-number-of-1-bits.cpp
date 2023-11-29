class Solution {
public:
    unsigned int solve(uint32_t n){
      
       unsigned int counter=0;
       while(n!=0){
           int rem = n%2;
           if(rem == 1) counter++;
           n = n/2;
       }
       return counter;
   }


    int hammingWeight(uint32_t n) {
        return solve(n);
    }
};