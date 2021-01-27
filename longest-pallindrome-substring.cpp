/*
Given a string S of length N, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index ).
 

Example 1:

Input:
S = "aaaabbaa"
Output: "aabbaa"
Explanation:The longest palindromic sub-string
present in the given string is "aabbaa".
 

Example 2:

Input:
S = "abcd"
Output: "a"
Explanation:The longest palindromic sub-string
present in the given string is "a". 
*/
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string);

// Your code will be pasted here

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << longestPalindrome(str) << endl;
    }
    return 0;
} // } Driver Code Ends

// User function template for C++

// A : given string
// return the required string
string longestPalindrome(string S)
{
    // code here
    string ans = "";
    int l, h;
    int start = 0, end = 1;

    for (int i = 1; i < S.length(); i++)
    {
        //even substring
        l = i - 1;
        h = i;
        while (l >= 0 && h < S.length() && S[l] == S[h])
        {
            if (h - l + 1 > end)
            {
                start = l;
                end = h - l + 1;
            }
            l--;
            h++;
        }
        //odd substring
        l = i - 1;
        h = i + 1;
        while (l >= 0 && h < S.length() && S[l] == S[h])
        {
            if (h - l + 1 > end)
            {
                start = l;
                end = h - l + 1;
            }
            l--;
            h++;
        }
    }
    for (int i = start; i <= start + end - 1; i++)
    {
        ans += S[i];
    }
    return ans;
}