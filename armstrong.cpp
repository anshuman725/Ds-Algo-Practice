#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no." << endl;
    cin >> n;
    int sum = 0;
    int orignal = n;

    while (n > 0)
    {
        int l = n % 10;
        sum += pow(l,3);
        n=n/10;
        
    }
    

   if (sum == orignal)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}