/*
Input:
N = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

*/



// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int a[], int n) {
    //code here
   unordered_set<int>s;
    int firstRepeating=-1;
    
    for(int i=n-1;i>=0;i--)
    {
        if(s.find(a[i])!=s.end())
        {
            firstRepeating=i+1;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    return firstRepeating;
}
