#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}