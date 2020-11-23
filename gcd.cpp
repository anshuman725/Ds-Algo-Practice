#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int rem = 0;

    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}