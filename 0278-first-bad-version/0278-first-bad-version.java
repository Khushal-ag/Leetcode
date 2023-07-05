/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int l=1,u=n,mid;
        while(l<=u)
        {
            mid = l + (u-l)/2;
            if(!(isBadVersion(mid))) l = mid + 1;
            else u = mid - 1;
        }
        return l;
    }
}