/*
https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 
 



*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &A, int M, int N)
    {

        int k = (M * N + 1) / 2;

        int a = INT_MAX;
        int b = INT_MIN;

        for (int i = 0; i < M; i++)
        {
            a = min(a, A[i][0]);
            b = max(b, A[i][N - 1]);
        }

        while (a < b)
        {
            int m = (a + b) / 2;

            int cnt = 0;

            for (int i = 0; i < M; i++)
                cnt = cnt + (upper_bound(A[i].begin(), A[i].end(), m) - A[i].begin());

            if (cnt < k)
                a = m + 1;
            else
                b = m;
        }

        return a;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }
    return 0;
} // } Driver Code Ends