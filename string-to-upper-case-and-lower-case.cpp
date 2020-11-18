#include <bits/stdc++.h>
using namespace std;

/*string toUpper(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    return str;
}

string toLower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    return str;
}*/

int main()
{
    string str;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;

    //cout << toUpper(str) << endl;
    //cout << toLower(str) << endl;
}