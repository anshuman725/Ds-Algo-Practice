// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
     int sum=0;
    int f=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0 || m[sum] || arr[i]==0)
        {
            f=1;
            break;
        }
        else{
            m[sum]=1;
        }
    }
    if(f==1)
    {
        return true;
    }
    else{
        return false;
    }
}


