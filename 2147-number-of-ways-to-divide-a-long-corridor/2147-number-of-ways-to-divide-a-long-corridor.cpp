class Solution {
public:
    int numberOfWays(string corridor) {
        vector<int> seat_index;
        long long ans = 1;
        const int mod = 1e9+7;
        int cnt =0;
        for(int i = 0;i<corridor.size();i++){
            if(corridor[i] == 'S'){
                seat_index.push_back(i);
                cnt++;
            }
        }
        if(cnt == 0) return 0;
        if(cnt&1) return 0;
        int i = 1;
        long long d = 0;
        for(i = 1;i<seat_index.size()-1;i+=2){
            d = seat_index[i+1]-seat_index[i];
            ans = (ans*d)%mod;
        }
        return ans;
    }
};