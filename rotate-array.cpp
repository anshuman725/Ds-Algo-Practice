/*
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.

*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

void rev(int arr[], int d, int n)
{

    while (d < n)
    {
        swap(arr[d++], arr[n--]);
    }
}
void rotateArr(int arr[], int d, int n)
{
    // code here
    rev(arr, 0, n - 1);
    rev(arr, 0, n - d - 1);
    rev(arr, n - d, n - 1);
}

// { Driver Code Starts.

int main()
{
    int t;
    //taking testcases
    cin >> t;

    while (t--)
    {
        int n, d;

        //input n and d
        cin >> n >> d;

        int arr[n];

        //inserting elements in the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //calling rotateArr() function
        rotateArr(arr, d, n);

        //printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends