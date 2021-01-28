/*
s1=xy;
s2=12;
s3=x1y2;
ans=1;
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, res;
    cin >> s1 >> s2 >> res;
    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = res.length();
    int i = 0, j = 0, k = 0;
    if (l1 + l2 != l3)
    {
        cout << "No" << endl;
    }
    else
    {
        while (k < l3)
        {
            if (i < l1 && s1[i] == res[k])
                i++;
            else if (j < l2 && s2[j] == res[k])
                j++;
            else
            {
                break;
            }
            k++;
        }
    }
    if (i < l1 || j < l2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}