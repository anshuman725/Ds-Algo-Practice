#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    
    int p = 2*m;
    int a[p];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    // 1 2 2 3
	// 1 2 1
    // 1 2 1 3 2 3
    int count=0;
    int coun=0;

    int map[p]={0};
    for(int i=0;i<p;i++)
    {
        map[a[i]]++;
    }
    for(int i=0;i<p;i++)
    {
        if(map[i]>=1)
        {
            coun++;
        }
    }
    int low =0;
	int high =1;
	int check=2;
	while(low<p && high<p)
	{
		if(a[low]!=a[check])
		{
			if(a[high]!=a[high+2])
			{
				count++;
			}
		}
		if(a[low]==a[check])
		{
			check+=2;
			count--;

		}
		low+=2;
		high+=2;
		check+=2;
	}
    
	cout<<count+coun+1;
    
}