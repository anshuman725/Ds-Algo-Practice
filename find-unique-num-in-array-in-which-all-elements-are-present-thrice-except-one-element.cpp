/*Ex: 1234123123
output: 4;
*/
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int a[], int n)
{
    int result = 0;
    for (int i= 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
                sum++;
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << unique(a, n) << endl;
}
