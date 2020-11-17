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
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }
    cout << "Minimum = " << mini << " "
         << " Maximum = " << maxi << endl;
}