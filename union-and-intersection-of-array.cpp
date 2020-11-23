#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

void printUnion(int a1[], int a2[], int n, int m)
{
    if (n > m)
    {
        int *tempp = a1;
        a1 = a2;
        a2 = tempp;

        int temp = n;
        n = m;
        m = temp;
    }

    sort(a1, a1 + n);

    for (int i = 0; i < n; i++)
        cout << a1[i] << " ";

    for (int i = 0; i < m; i++)
    {
        if (binarySearch(a1, 0, n - 1, a2[i]) == -1)
            cout << a2[i] << " ";
    }
}
void printIntersection(int a1[], int a2[], int n, int m)
{
    if (n > m)
    {
        int *tempp = a1;
        a1 = a2;
        a2 = tempp;

        int temp = n;
        n = m;
        m = temp;
    }

    sort(a1, a1 + n);

    for (int i = 0; i < m; i++)
    {
        if (binarySearch(a1, 0, n - 1, a2[i]) != -1)
        {
            cout << a2[i] << " ";
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n];
    int a2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    printUnion(a1, a2, n, m);
    cout<<endl;
    printIntersection(a1, a2, n, m);
}