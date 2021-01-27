/*
Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Example 1:

Input:
N = 51
Output: AY


*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;
string ExcelColumn(int n);

// } Driver Code Ends

//User function template for C++

string ExcelColumn(int n)
{
    // Your code goes here
    string ans = "";
    while (n)
    {
        char c = 'A' + (n - 1) % 26;
        ans = c + ans;
        n = (n - 1) / 26;
    }
    return ans;
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
        cout << ExcelColumn(n) << endl;
    }
    return 0;
}
// } Driver Code Ends