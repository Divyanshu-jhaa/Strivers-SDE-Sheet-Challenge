#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> res;
    unordered_map<int, int> mp;
    int false_sum = 0;
    int true_sum = (n * (n + 1)) / 2;
    for (auto gg : arr)
    {
        mp[gg]++;
        false_sum += gg;
    }
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            res.second = x.first;
        }
    }
    res.first = true_sum - (false_sum - res.second);
    return res;
}
