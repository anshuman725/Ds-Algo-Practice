#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
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

    int nowrapsum;
    int wrapsum;

    nowrapsum = kadane(a, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalsum + kadane(a, n);

    cout << max(wrapsum, nowrapsum) << endl;
}