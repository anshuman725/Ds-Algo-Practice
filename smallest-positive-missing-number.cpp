/*
Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
 

Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find missing integer in array
// arr: input array
// n: size of array

int seperate(int a[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] <= 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return j;
}

int find(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = abs(a[i]);
        if (x - 1 < n && a[x - 1] > 0)
        {
            a[x - 1] = -a[x - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}

int findMissing(int a[], int n)
{

    // Your code here
    int size = seperate(a, n);

    int a2[n - size];
    int j = 0;
    for (int i = size; i < n; i++)
    {
        a2[j] = a[i];
        j++;
    }

    find(a2, j);
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << findMissing(arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends