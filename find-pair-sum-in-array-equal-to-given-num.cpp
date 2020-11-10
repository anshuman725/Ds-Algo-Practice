/*
Pair Target Sum Problem
Find whether there exist 2 numbers that sum to K.
Important: The Array should be sorted for two pointer approach.
Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].
Time Complexity: O(N)
Space Complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k)
{
    int st = 0, ed = n - 1;
    while (st < ed)
    {
        if (a[st] + a[ed] == k)
        {
            cout << st << " " << ed << endl;
            return true;
        }
        else if (a[st] + a[ed] > k)
        {
            ed--;
        }
        else
        {
            st++;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = check(a, n, k);
    if (ans == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
