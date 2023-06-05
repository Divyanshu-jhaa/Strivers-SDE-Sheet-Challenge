#include <bits/stdc++.h>

long long maxSubarraySum(int arr[], int n)
{
    long long int cs = 0;
    long long int res = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        res = max(cs, res);
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return res;
}