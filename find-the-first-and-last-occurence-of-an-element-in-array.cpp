#include <iostream>
using namespace std;

int findFirst(int a[], int n, int i, int k)
{
    if (i == n)
        return -1;
    if (a[i] == k)
        return i;

    return findFirst(a, n, i + 1, k);
}
int findLast(int a[], int n, int i, int k)
{
    if(i==n)
    return -1;

    int occur = findLast(a, n, i + 1, k);

    if (occur != -1)
    {
        return occur;
    }
    if (a[i] == k)
    {
        return i;
    }
    return -1;
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
    int i = 0;
    cout << findFirst(a, n, i, k)<<endl; 
    cout << findLast(a, n, i, k);
}