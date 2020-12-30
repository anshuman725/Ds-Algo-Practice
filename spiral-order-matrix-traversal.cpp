/*
Problem: We have to print the given 2D matrix in the spiral order. 
Spiral Order means that firstly, first row is printed, then last column is printed,
 then last row is printed and then first column is printed,
 then we will come inwards in the similar way. 
*/
/*
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/0/?track=ppc-matrix&batchId=221#
vector method
// { Driver Code Starts

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int rs=0;
        int rend=matrix.size()-1;
        int cs=0;
        int cend=matrix[0].size()-1;
        int d=0;
        vector<int>ans;
        
        while(rs<=rend && cs<=cend)
        {
            if(d==0)
            {
                for(int i=cs;i<=cend;i++)
                {
                    ans.push_back(matrix[rs][i]);
                     
                }
               rs++; 
            }
           
            else if(d==1)
            {
                for(int i=rs;i<=rend;i++)
                {
                    ans.push_back(matrix[i][cend]);
                    
                }
                cend--;
            }
            
            else if(d==2)
            {
                for(int i=cend;i>=cs;i--)
                {
                     ans.push_back(matrix[rend][i]);
                     
                }
                rend--;
            }
            
            else if(d==3)
            {
                for(int i=rend;i>=rs;i--)
                {
                    ans.push_back(matrix[i][cs]);
                    
                }
                cs++; 
            }
           
            d=(d+1)%4;
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends




*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        //first row is printed
        for (int col = col_start; col <= col_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        row_start++;
        //last column is printed
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][col_end]<<" ";
        }
        col_end--;
        //last row is printed
        for (int col = col_end; col >= col_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;
        //then first column is printed
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][col_start] << " ";
        }
        col_start++;
    }
    return 0;

}

