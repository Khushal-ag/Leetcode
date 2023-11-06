class Solution {
public:
    int getLastMoment(int plankLength, const vector<int>& leftDirection, const vector<int>& rightDirection) const {
        int lastMomentWhenAllAntsFallOut = 0;

        for (const auto& position : leftDirection) {
            lastMomentWhenAllAntsFallOut = max(lastMomentWhenAllAntsFallOut, position);
        }
        for (const auto& position : rightDirection) {
            lastMomentWhenAllAntsFallOut = max(lastMomentWhenAllAntsFallOut, plankLength - position);
        }

        return lastMomentWhenAllAntsFallOut;
    }
};