/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=-1,sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
               sum+=a[k];
               mx=max(mx,sum);
               
            }
           sum=0;
        }
        
    }

    cout<<mx<<endl;
    return 0;
}*/
