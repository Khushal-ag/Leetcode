class Solution {
public:
   bool isScramble(string s1, string s2) {
        int n = (int) s1.size();
        bool vis[n][n][n][n];
        bool dp[n][n][n][n];
        memset(vis, false, sizeof(vis));
        memset(dp, false, sizeof(dp));

        function<bool(int, int, int, int)> helper = [&] (int l1, int r1, int l2, int r2) {
            if (vis[l1][r1][l2][r2]) return dp[l1][r1][l2][r2];
            vis[l1][r1][l2][r2] = true;

            bool isSame = true;
            for (int i = l1, j = l2; i <= r1 && j <= r2; i++, j++)
                if (s1[i] != s2[j]) isSame = false;
            
            if (isSame) {
                dp[l1][r1][l2][r2] = true;
                return true;
            }

            bool res = false;
            for (int i = l1; i < r1; i++) {
                res |= (helper(l1, i, l2, l2 + (i - l1)) && helper(i + 1, r1, l2 + (i - l1) + 1, r2));

                res |= (helper(l1, i, r2 - (i - l1), r2) && helper(i + 1, r1, l2, r2 - (i - l1) - 1));
            }

            dp[l1][r1][l2][r2] = res;
            return res;
        };

        return helper(0, n - 1, 0, n - 1);
    }
};