/*
Example:
Input:
2
6 51
1 4 45 6 0 19
5 9
1 10 5 2 7
Output:
3
1
*/




#include <bits/stdc++.h>
using namespace std;

int subArray(int a[],int n,int s)
{
 int count=INT_MAX;
 int i=0,j=0;
 int sum=0;
 while(i<=j && j<n)
 {
     while(sum<=s && j<n)
     {
         sum+=a[j++];
         
     }
     while(sum>s)
     {
         count=min(count,j-i);
         sum-=a[i];
         i++;
         
     }
 }
 return count;
 
}

int main() {
	//code
	int t;
	cin>>t;
	int n;
	int s;
	while(t--)
	{
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    cout<<subArray(a,n,s)<<endl;
	}
	return 0;
}