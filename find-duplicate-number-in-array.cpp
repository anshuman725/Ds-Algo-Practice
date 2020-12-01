/*
Input: nums = [1,3,4,2,2]
Output: 2

*/

#include <iostream>
using namespace std;

int duplicate(int a[], int n)
{

    for (int i = 0; i < n;i++)
    {
        a[a[i] % n] = a[a[i] % n] + n;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] / n > 1)
        {
            return i;
        }
    }
    return 0;
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
    cout << duplicate(a, n);
}