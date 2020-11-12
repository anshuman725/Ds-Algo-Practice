#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int target;
    cin>>n>>m>>target;

    int a[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cin>>a[i][j];
      }
    }
    int r=0,c=n-1;
    bool found=false;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(a[r][c]==target)
        {
          found=true;
        }
        else if(a[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
        
      }
    }

    if(found)
    {
        cout<<"Found !"<<endl;
    }
    else{
        cout<<"Not Found !"<<endl;
    }
}
