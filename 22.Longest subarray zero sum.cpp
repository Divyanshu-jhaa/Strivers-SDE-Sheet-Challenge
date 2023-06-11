#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int n = arr.size();
    int res = 0;
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            res = max(res, i + 1);
        }
        else
        {
            if (mp.count(sum))
            {
                res = max(res, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }
    return res;
}