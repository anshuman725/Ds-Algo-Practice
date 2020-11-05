#include <iostream>
#include <math.h>
using namespace std;

int octalTodecimal(int n)
{
    int ans = 0;
    int l;
    int count = 0;
    while (n > 0)
    {
        l = n % 10;
        ans += l * pow(8, count);
        count++;
        n /= 10;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout << octalTodecimal(n) << endl;

    return 0;
}