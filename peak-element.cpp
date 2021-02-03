/*
A peak element in an array is the one that is not smaller than its neighbours.
Given an array of size N, find the index of any one of its peak elements.
 

Example 1:

Input:
N = 3
arr[] = {1,2,3}
Output: 2 
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
 

Example 2:

Input:
N = 2
arr[] = {3,4}
Output: 1
Explanation: 4 (at index 1) is the 
peak element as it is greater than 
its only neighbour element 3.

*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
   // Your code here
   int low=0;
   int high=n-1;
   
    while(low<=high)
   {
       int mid=low+(high-low)/2;
       if(mid>0 && mid<n-1){
        if(arr[mid]>arr[mid]-1&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid-1]>arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
           
       }
       else if(mid==0)
       {
           if(arr[mid]>arr[mid+1])
           {
               return 0;
           }
           else{
               return 1;
           }
       }
       else if(mid==n-1)
       {
           if(arr[mid]>arr[mid-1])
           {
               return n-1;
           }
           else{
               return n-2;
           }
       }
       
       
   }
   return 0;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		int A = peakElement(tmp,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends