/*
Example:
Input
2
5
2 1 5 6 3
3
7
2 7 9 5 8 7 4
6
Output
1
2

Explanation:
1. To bring elements 2, 1, 3 together, swap element '5' with '3' such that final array will be- arr[] = {2, 1, 3, 6, 5}
2. To bring elements 2, 5, 4 together, swap element 7 with 5 & 9 with 4 such that the final array will be {2,5,4,7,8,7,9}   


*/
#include <bits/stdc++.h>
using namespace std;

int swaps(int a[], int n, int k)
{
    int count = 0;
    int flag = 0;
    int mi = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (a[i] > k)
        {
            flag++;
        }
    }
    int i = 0;
    int j = count - 1;
    while (j < n)
    {
        mi = min(mi, flag);
        j++;
        if (j < n && a[j] > k)
            flag++;
        if (a[i] > k)
        {

            flag--;
        }
        i++;
    }
    return mi;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        cout << swaps(a, n, k) << endl;
    }
}