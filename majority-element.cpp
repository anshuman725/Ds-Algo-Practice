/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output: -1

Explanation: Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output: 3
Explanation: Since, 3 is present 
more than N/2 times, so it is 
the majority element.




*/


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find majority element in the array
// a: input array
// size: size of input array
int cand(int a[], int size)
{
    int maj_index = 0;
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (a[maj_index] == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
bool check(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)

        if (a[i] == cand)
            count++;

    if (count > size / 2)
        return 1;

    else
        return 0;
}

int majorityElement(int a[], int size)
{

    // your code here
    int c = cand(a, size);

    if (check(a, size, c))
    {
        return c;
    }
    else
    {
        return -1;
    }
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
        {
            cin >> arr[i];
        }

        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
// } Driver Code Ends