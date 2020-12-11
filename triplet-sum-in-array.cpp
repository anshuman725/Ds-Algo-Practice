/*
Input:
2
6 13
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
1
1

Explanation:
Testcase 1: There is one triplet with sum 13 in the array. Triplet elements are 1, 4, 8, whose sum is 13.
*/
#include <bits/stdc++.h>
using namespace std;

bool sum(int a[], int n, int s)
{
    sort(a, a + n);
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==s)
            {
                return 1;
            }
            else if(a[i]+a[l]+a[r]<s)
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    

    return 0;
}

int main()
{
    //code
    int t;
    cin >> t;
    while(t--){
    int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << sum(a, n, s) << endl;
    }

    return 0;
}