/*

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0

Explanation:
Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units. 
So, total unit of water trapped is 10 units.

*/

#include <bits/stdc++.h>
using namespace std;

int rain(int a[],int n)
{
    int l=0;
    int r=n-1;
    int ml=0;
    int mr=0;
    int sum=0;
    while(l<=r)
    {
        if(a[l]<a[r]){
            if(a[l]>ml)
            {
                ml=a[l];
            }
            else{
                sum+=ml-a[l];
            }
            l++;
        }
        
        else
            {
                if(a[r]>mr)
                {
                    mr=a[r];
                }
                else{
                    sum+=mr-a[r];
                }
                r--;
            }
    }
    return sum;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{   int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<rain(a,n)<<endl;
	}
	return 0;
}