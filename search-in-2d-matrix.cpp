/*

https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/0/?track=ppc-matrix&batchId=221#
Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.

Example 1:

Input:
n = 3, m = 3, x = 62
matrix[][] = {{ 3, 30, 38},
              {36, 43, 60},
              {40, 51, 69}}
Output: 0
Explanation:
62 is not present in the matrix, 
so output is 0.




*/

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> matrix, int n, int m, int x);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;

        if (search(matrix, n, m, x))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}

// } Driver Code Ends

bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    // code here
    if (n == 0 && m == 0)
    {
        return -1;
    }
    int small = matrix[0][0];
    int large = matrix[n - 1][m - 1];

    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            return 1;
        }

        if (matrix[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}