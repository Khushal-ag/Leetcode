class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int, int> Map;
        for(vector<int> flower: flowers) {
            Map[flower[0]]++;
            Map[flower[1] + 1]--;
        }
        int last = 0;
        for(auto iter: Map) {
            Map[iter.first] += Map[last];
            last = iter.first;
        }
        vector<int> ans(people.size());
        for(int i = 0; i < people.size(); i++) {
            ans[i] = prev(Map.upper_bound(people[i])) -> second;
        }
        return ans;
    }
};