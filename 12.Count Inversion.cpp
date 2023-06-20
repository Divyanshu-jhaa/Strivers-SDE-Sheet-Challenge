#include <bits/stdc++.h>
long long merge(long long l, long long r, long long *arr)
{
    long long mid = (l + r) / 2;
    long long i = l;
    long long j = mid + 1;
    long long *temp = new long long[l + r + 2];
    long long c = 0;
    long long res = 0;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp[c++] = arr[i++];
        }
        else
        {
            res += (mid - i + 1);
            temp[c++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[c++] = arr[i++];
    }
    while (j <= r)
    {
        temp[c++] = arr[j++];
    }
    c = 0;
    for (long long k = 0; k < (r - l + 1); k++)
    {
        arr[k] = temp[c++];
    }
    return res;
}
long long solve(long long l, long long r, long long *arr)
{
    if (l < r)
    {
        long long mid = (l + r) / 2;
        return solve(l, mid, arr) + solve(mid + 1, r, arr) + merge(l, r, arr);
    }
}
long long getInversions(long long *arr, long long n)
{
}