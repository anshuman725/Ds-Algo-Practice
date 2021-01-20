/*
Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.

 

Example 1:

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.
 

Example 2:

Input:
mightandmagic
andmagicmigth
Output: 
0
Explanation: Here with any amount of
rotation s2 can't be obtained by s1.    


*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool areRotations(string, string);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        cout << areRotations(s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends

/*  Function to check if two strings are rotations of each other
*   s1, s2: are the input strings
*/
bool areRotations(string s1, string s2)
{
    // Your code here
    int n = s1.size();
    int m = s2.size();

    if (n != m)
        return 0;
    else
    {
        string ans = s1 + s1;
        if (ans.find(s2) != string::npos)
        {
            return 1;
        }
    }
    return 0;
}