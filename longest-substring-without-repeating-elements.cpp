/*
Given a string S, find the length of its longest substring that does not have any repeating characters.

Example 1:

Input:
S = geeksforgeeks
Output: 7
Explanation: The longest substring
without repeated characters is "ksforge".
Example 2:

Input:
S = abbcdb
Output: 3
Explanation: The longest substring is
"bcd". Here "abcd" is not a substring
of the given string.


*/
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);


 // } Driver Code Ends


//User function Template for C++

// s is the given string
int SubsequenceLength (string s) 
{
    // Your code goes here
    
    vector<int>m(256,-1);
    int n=s.size();
    int l=INT_MIN;
    
    int i=0;
    if(n==0)
    {
        return 0;
    }
    for(int j=0;j<n;j++)
    {
        i=max(i,m[s[j]]+1);
        m[s[j]]=j;
        l=max(l,j-i+1);
    }
    return l;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends