class Solution {
public:
    double average(vector<int>& salary) {
        auto min = *min_element(salary.begin(),salary.end());
        auto max = *max_element(salary.begin(),salary.end());
        auto sum = accumulate(salary.begin(),salary.end(),0);
        double avg = (double)(sum - min - max)/(salary.size()-2);
        return avg;
    }
};