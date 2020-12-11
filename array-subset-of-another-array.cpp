#include <bits/stdc++.h>
using namespace std;

bool subset(int a[],int b[],int n,int m)
{
   set<int> hashset; 
  
    // hset stores all the values of arr1 
    for (int i = 0; i < n; i++) 
    { 
        hashset.insert(a[i]); 
    } 
  
    // loop to check if all elements of arr2 also 
    // lies in arr1 
    for (int i = 0; i < m; i++) { 
        if (hashset.find(b[i]) == hashset.end()) 
            return false; 
    } 
    return true; 
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    if(subset(a,b,n,m))
	    {
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	
	return 0;
}