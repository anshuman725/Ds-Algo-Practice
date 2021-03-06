/*
https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/0/?track=ppc-arrays&batchId=221

Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].
Example 1:

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.
 

Example 2:

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n)
{
    // Your code here
    for (int i = 0; i < n; i++)
    {
        arr[i] += (arr[arr[i]] % n) * n;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] /= n;
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    //testcases
    cin >> t;
    while (t--)
    {

        int n;
        //size of array
        cin >> n;
        long long A[n];

        //adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        //calling arrange() function
        arrange(A, n);

        //printing the elements
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends