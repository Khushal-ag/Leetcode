class Solution {
public:
    void swap(vector<int>& a,int i,int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    void sortColors(vector<int>& nums) {
        int l = 0,mid = 0,h = nums.size()-1;
        while(mid<=h)
        {
            if(nums[mid]==0)
            {
                swap(nums,mid,l);
                mid++;
                l++;
            }
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums,mid,h);
                h--;
            }
        }
    }
};