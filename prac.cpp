
#include <bits/stdc++.h>
using namespace std;

int ans(int a[], int n)
{
    int sum = 0;
     for (int i = 0; i < n; i++)
     {
         sum+=a[i];
     }
    for (int i = 0; i < n; i++)
    {
       
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }
    for (int i = 0; i < n-1 ;i++)
    {
        
        sum -= a[i];
        i=i+3;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
  
    cout << ans(a, t)<<endl;
}