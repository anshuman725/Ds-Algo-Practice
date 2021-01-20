/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

Example 1:

Input:
a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same
characters with same frequency. So, 
both are anagrams.
Example 2:

Input:
a = allergy, b = allergic
Output: NO
Explanation:Characters in both the strings
are not same, so they are not anagrams.



*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/*  Function to check if two strings are anagram
*   a, b: input string
*/
bool isAnagram(string a, string b)
{

    // Your code here
    int n = a.size();
    int m = b.size();
    if (n != m)
    {
        return 0;
    }

    int ma[256] = {0};

    for (int i = 0; i < n; i++)
    {
        ma[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        ma[b[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (ma[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

// { Driver Code Starts.

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string c, d;

        cin >> c >> d;

        if (isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
// } Driver Code Ends