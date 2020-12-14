#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(int array[], int n, int a, int b)
{
    // code here
    int l = 0;
    int r = n - 1;
    for (int i = 0; i <= r;i++)
    {
        if (array[i] < a)
        {
            swap(array[i], array[l]);
           
            l++;
        }
        else if (array[i] > b)
        {
            swap(array[i], array[r]);
            i--;
            r--;
        }
        
    }
}
int main()
{
    int n;

    cin >> n;
    int a, b;

    int array[n];
    for (int i = 0; i < n; i++)     
    {
        cin >> array[i];
    }
    cin >> a >> b;
    threeWayPartition(array, n, a, b);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}