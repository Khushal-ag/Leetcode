/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size();i++)
        {
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < image[i].size(); j++)
            {
                image[i][j] = image[i][j] == 1 ? 0 : 1;
            }
            
        }
        return image;
    }
};
// @lc code=end

