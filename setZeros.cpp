#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                a.push_back({i, j});
            }
        }
    }
    for (auto x : a)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[x.first][i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            matrix[i][x.second] = 0;
        }
    }
}