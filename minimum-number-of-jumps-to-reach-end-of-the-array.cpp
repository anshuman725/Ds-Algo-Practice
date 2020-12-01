/*
input :1 3 5 8 9 2 6 7 6 8 9
output: 3

*/

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    // Your code here
    int step = arr[0];
    int maxReach = arr[0];
    int jump = 1;

    if (arr[0] == n)
    {
        return 0;
    }
    else if (arr[0] == 0)
    {
        return -1;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                return jump;

            maxReach = max(maxReach, arr[i] + i);
            step--;

            if (step == 0)
            {
                jump++;
                if (i >= maxReach)
                    return -1;
                step = maxReach - i;
            }
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

    cout << minJumps(a, n) << endl;
}