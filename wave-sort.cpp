/*
input :1 3 4 7 5 6 2;
output : 3 1 7 4 6 2 5;   
*/

#include <bits/stdc++.h>
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

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] > a[i - 1])
        {
            swap(a[i], a[i - 1]);
        }
        if (a[i] > a[i + 1] && i <= n - 2)
        {
            swap(a[i], a[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}