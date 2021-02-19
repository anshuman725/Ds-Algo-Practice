#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = 0;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = 0;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = 0;
                break;
            }
        }
    }
    if (!st.empty())
    {
        ans = 0;
    }

    return ans;
}

int main()
{
    string s = "({[]}]";
    if (isValid(s))
    {
        cout << "balanced";
    }
    else
    {
        cout << "Unbalanced";
    }
}