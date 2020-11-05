#include <bits/stdc++.h>
using namespace std;

int decimaltobinary(int n)
{
    int reverse;
    int l;
    int c = 1;
    int ans = 0;
    while (n > 0)
    {
        l = n % 2;
        ans = ans + l * c;
        c *= 10;
        n /= 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << decimaltobinary(n) << endl;
    return 0;
}
