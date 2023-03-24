class Solution
{
    public:
        bool isToeplitzMatrix(vector<vector < int>> &matrix)
        {
            int r = matrix.size() - 1;
            int c = matrix[0].size() - 1;
            for(int i=1;i<=r;i++)
                for(int j=1;j<=c;j++)
                    if(matrix[i][j] != matrix[i-1][j-1]) return false;
            return true;
        }
};