#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int m = prices[0];
    int res = INT_MIN;
    for (int i = 1; i < prices.size(); i++)
    {
        int temp = prices[i] - m;
        res = max(res, temp);
        m = min(m, prices[i]);
    }
    return res < 0 ? 0 : res;
}