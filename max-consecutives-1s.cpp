#include<bits/stdc++.h>
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

    int k;
    cin>>k;
//[i....j]
    int i=0;
    int zerocnt=0;
    int ans=INT_MIN;
    for(int j=0;j<n;j++)
    {
        if(a[j]==0)
        {
            zerocnt++;
        }
        while(zerocnt>k)
        {
            if(a[i]==0)
            {
                zerocnt--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
}