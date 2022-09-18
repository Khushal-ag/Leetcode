class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0,r = h.size()-1,lmax = -1,rmax = -1,ans = 0;
        while(l<=r)
        {
            lmax = max(lmax,h[l]);
            rmax = max(rmax,h[r]);
            if(lmax<rmax){
                ans += lmax-h[l];
                l++;
            }
            else{
                ans += rmax-h[r];
                r--;
            }
        }
        return ans;
    }
};