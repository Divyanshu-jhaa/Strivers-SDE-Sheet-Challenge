bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int i = 0;
    int n = mat.size();
    int m = mat[0].size();
    if (mat[n - 1][m - 1] < target)
    {
        return false;
    }
    while (i < n && mat[i][m - 1] < target)
    {
        i++;
    }
    for (int j = 0; j < m; j++)
    {
        if (mat[i][j] == target)
        {
            return true;
        }
    }
    return false;
}