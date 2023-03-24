class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
       vector<int> ans(N + 1, 0);
        for(auto i : trust){
            ans[i[0]]--;
            ans[i[1]]++;
        }
        for(int i = 1;i <= N;i++){
            if(ans[i] == N - 1)
                return i;
        }
        return -1;
    }
};