/*Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output: 5
Explanation: The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
*/

#include <bits/stdc++.h>
using namespace std;


int heights(int n, int a[], int k)
{
    sort(a, a + n);
    int ans = a[n - 1] - a[0];
    int big = a[n - 1] - k;
    int small = a[n - 1] + k;
    if (small > big)
        sort(small, big);
    int add, sub;

    for (int i = 1; i < n; i++)
    {
        add = a[i] + k;
        sub = a[i] - k;
        if (sub >= small && add <= big)
            continue;

        if (big - sub <= add - small)
            small = sub;
        else
            big = add;
    }
    return min(ans, big - sub);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];


    cout<<heights(n,a,k)<<endl;
}