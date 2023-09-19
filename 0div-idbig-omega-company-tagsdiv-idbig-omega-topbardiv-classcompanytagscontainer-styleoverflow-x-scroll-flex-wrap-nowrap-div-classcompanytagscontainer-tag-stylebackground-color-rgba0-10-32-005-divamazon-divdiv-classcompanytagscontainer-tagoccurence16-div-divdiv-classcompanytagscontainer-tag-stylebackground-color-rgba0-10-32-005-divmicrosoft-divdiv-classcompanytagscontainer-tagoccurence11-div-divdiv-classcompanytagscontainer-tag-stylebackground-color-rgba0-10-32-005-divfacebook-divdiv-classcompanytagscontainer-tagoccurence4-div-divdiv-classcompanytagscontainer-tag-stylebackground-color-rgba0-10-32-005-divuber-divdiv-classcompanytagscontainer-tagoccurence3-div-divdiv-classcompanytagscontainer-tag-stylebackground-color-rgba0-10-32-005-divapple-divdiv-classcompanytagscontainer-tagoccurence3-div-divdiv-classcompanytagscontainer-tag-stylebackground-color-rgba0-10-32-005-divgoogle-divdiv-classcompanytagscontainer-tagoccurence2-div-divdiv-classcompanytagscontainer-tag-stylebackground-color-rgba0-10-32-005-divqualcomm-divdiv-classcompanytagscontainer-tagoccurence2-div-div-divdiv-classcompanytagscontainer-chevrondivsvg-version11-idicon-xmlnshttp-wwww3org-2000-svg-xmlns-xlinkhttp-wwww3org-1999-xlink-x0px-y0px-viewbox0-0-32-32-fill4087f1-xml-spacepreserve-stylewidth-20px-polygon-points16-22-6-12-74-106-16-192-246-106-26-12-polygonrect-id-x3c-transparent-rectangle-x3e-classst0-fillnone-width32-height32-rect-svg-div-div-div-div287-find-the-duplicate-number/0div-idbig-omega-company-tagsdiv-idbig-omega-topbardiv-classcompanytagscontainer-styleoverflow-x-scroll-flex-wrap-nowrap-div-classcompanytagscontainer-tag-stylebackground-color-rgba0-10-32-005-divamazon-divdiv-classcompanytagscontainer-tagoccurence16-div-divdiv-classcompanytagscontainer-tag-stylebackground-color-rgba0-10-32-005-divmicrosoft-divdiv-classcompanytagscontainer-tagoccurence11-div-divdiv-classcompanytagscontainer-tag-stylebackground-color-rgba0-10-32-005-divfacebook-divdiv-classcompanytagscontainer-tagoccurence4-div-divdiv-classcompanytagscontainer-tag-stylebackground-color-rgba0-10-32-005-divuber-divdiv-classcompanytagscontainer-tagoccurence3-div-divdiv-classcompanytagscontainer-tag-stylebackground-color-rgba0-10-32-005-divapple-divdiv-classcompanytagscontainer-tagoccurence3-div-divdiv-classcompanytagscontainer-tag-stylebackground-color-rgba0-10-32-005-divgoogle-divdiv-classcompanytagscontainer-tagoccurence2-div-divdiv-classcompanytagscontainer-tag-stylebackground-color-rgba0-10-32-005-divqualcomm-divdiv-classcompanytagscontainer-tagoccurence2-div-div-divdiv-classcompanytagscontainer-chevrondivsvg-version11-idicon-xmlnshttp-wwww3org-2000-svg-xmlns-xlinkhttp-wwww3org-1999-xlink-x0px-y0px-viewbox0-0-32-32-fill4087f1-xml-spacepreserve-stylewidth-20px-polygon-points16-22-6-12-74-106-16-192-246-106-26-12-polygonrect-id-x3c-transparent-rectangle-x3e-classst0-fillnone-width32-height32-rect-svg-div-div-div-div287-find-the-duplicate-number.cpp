class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> mp; // Create a map to store element counts
for (int i = 0; i < nums.size(); i++) {
mp[nums[i]]++; // Count occurrences of each element
}
int m = 0; // Initialize max count
int n = 0; // Initialize element with max count
for (auto i : mp) {
m = max(m, i.second); // Update max count
if (i.second == m) {
n = i.first; // Update element with max count
}
}
return n; 
    }
};