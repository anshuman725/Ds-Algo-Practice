#include <bits/stdc++.h>
using namespace std;

int decimaltooctal(int n)
{
    int reverse;
    int l;
    int c = 1;
    int ans = 0;
    while (n > 0)
    {
        l = n % 8;
        ans = ans + l * c;
        c *= 10;
        n /= 8;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << decimaltooctal(n) << endl;
    return 0;
}
