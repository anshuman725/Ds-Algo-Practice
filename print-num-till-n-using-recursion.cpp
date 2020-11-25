#include <iostream>
using namespace std;

void numDec(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    numDec(n - 1);
}

void numInc(int n)
{
    if (n == 0)
        return;
    numInc(n - 1);
    cout << n <<" ";
    
}

int main()
{
    int n;
    cin >> n;
    numInc(n);
    numDec(n);
}

//5>4>3>2>1
//4>3>2>1>