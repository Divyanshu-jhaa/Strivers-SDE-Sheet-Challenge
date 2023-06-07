#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            x++;
        }
        else if (arr[i] == 1)
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    int j = 0;
    while (x--)
    {
        arr[j] = 0;
        j++;
    }
    while (y--)
    {
        arr[j] = 1;
        j++;
    }
    while (z--)
    {
        arr[j] = 2;
        j++;
    }
}