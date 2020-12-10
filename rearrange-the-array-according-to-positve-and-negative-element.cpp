/*
Input:  arr[] = {1, 2, 3, -4, -1, 4}
Output: arr[] = {-4, 1, -1, 2, 3, 4}

Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0} 

*/
//this sol does not maintain order as for complexity of o(n) and space o(1) only this sol will work;

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (a[l] < 0 && a[r] > 0)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
        else if (a[l] > 0 && a[r] < 0)
        {
            l++;
            r--;
        }
        else if (a[l] > 0)
        {
            l++;
        }
        else if (a[r] < 0)
        {
            r--;
        }
    }
    if (l == 0 || l == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        int k = 0;
        while (k < n && l < n)
        {
            swap(a[k], a[l]);
            k += 2;
            l++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}