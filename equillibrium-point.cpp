/*
Example 1:

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 
Example 2:

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).

*/

// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main()
{

    long long t;

    //taking testcases
    cin >> t;

    while (t--)
    {
        long long n;

        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n)
{

    // Your code here
    int leftSum = 0;
    int sum = 0;
    if (n == 1)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (leftSum == sum)
            return i + 1;
        leftSum += a[i];
    }
    return -1;
}