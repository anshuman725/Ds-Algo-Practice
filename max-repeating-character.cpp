#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }

    char ans = 'a';
    int max = INT_MIN;

    for (int i = 0; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            ans += i;
        }
    }
    cout << max << " " << ans << endl;
}