#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                count = 1;
                cout << "Found at index " << i << " " << j;
            }
            else
            {
                count = 0;
            }
        }
    }
    if (count == 0)
        cout << "Not Found!";

    return 0;
}