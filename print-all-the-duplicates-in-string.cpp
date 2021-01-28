#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "geeksforgeeks";
    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
        {
            cout << it.first << " "
                 << "count " << it.second << endl;
        }
    }
}