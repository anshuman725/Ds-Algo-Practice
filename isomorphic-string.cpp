/*
Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.
Example 2:

Input:
str1 = aab
str2 = xyz
Output:
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.

*/
// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include <iostream>
#include <string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

// Driver program
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        cout << areIsomorphic(s1, s2) << endl;
    }

    return 0;
} // } Driver Code Ends

// This function returns true if str1 and str2 are ismorphic
// else returns false
bool areIsomorphic(string str1, string str2)
{

    // Your code here
    int n = str1.size();
    int m = str2.size();
    int m1[256] = {0};
    int m2[256] = {0};
    if (n != m)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (!m1[str1[i]] && !m2[str2[i]])
        {
            m1[str1[i]] = str2[i];
            m2[str2[i]] = str1[i];
        }
        else if (m1[str1[i]] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}