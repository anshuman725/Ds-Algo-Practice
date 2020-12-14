/*
Example:
Input:
2
8
3 4 1 9 56 7 9 12
5
7
7 3 2 4 9 12 56
3

Output:
6
2

Explanation:
Testcase 1: The minimum difference between maximum chocolates and minimum chocolates is 9-3=6

*/


#include <bits/stdc++.h>
using namespace std;

int choco(int a[], int n, int m)
{
    sort(a, a + n);
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = a[i + m - 1] - a[i];
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}

int main()
{
    //code
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        cout << choco(a, n, m) << endl;
    }

    return 0;
}