#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    unordered_map<char, int> mp;
    int l = 0;
    int r = 0;
    int ans = 0;
    int n = input.length();
    while (r < n)
    {
        if (!mp.count(input[r]))
        {
            mp[input[r]]++;
            ans = max(ans, r - l + 1);
        }
        else
        {
            while (mp.count(input[r]))
            {
                mp.erase(input[l]);
                l++;
            }
            mp[input[r]]++;
        }
        r++;
    }
    return ans;
}