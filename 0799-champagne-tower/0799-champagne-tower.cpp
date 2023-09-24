class Solution {
public:
    vector<double> solve(int n, int r) {
        if(r == 0) {
            return {n * 1.0};
        }

        vector<double> temp = solve(n, r - 1), arr;

        for(int i = 0; i <= temp.size(); i++) {
            double x = 0, y = 0;
            
            if(i - 1 >= 0 && temp[i - 1] > 1) {
                x = (temp[i - 1] - 1) / 2.0;
            }

            if(i < temp.size() && temp[i] > 1) {
                y = (temp[i] - 1) / 2.0;
            }

            arr.push_back(x + y);
        }

        return arr;
    }

    double champagneTower(int n, int r, int c) {
        vector<double> arr = solve(n, r);

        if(arr[c] > 1) {
            return 1.0;
        }

        return arr[c];
    }
};