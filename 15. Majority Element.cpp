#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int res = -1;
    int temp = n / 2;
    for (auto y : mp)
    {
        if (y.second > temp)
        {
            res = y.first;
            break;
        }
    }
    return res;
}