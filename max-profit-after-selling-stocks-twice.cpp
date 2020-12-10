/*
2, 30, 15, 10, 8, 25, 80
profit=100;
after selling twice ;

*/

#include <bits/stdc++.h>
using namespace std;

int stocks(int a[], int n)
{
    int buy1=INT_MAX, profit1=INT_MIN;
    int buy2=INT_MAX, profit2=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        buy1 = min(buy1, a[i]);
        profit1 = max(profit1, a[i] - buy1);
        buy2 = min(buy2, a[i] - profit1);
        profit2 = max(profit2, a[i] - buy2);
    }
    return profit2;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Max profit : " << stocks(a, n) << endl;
}