#include <bits/stdc++.h>
int solve(int i, int j, int m, int n, vector<vector<int>> &dp)
{
    // base case
    if (i == n || j == m)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }
    // recursive case
    return dp[i][j] = solve(i + 1, j, m, n, dp) + solve(i, j + 1, m, n, dp);
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(16, vector<int>(16, -1));
    return solve(0, 0, m, n, dp);
}