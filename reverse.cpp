#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;

    int reverse=0;
    while(n>0)
    {
        int r=n%10;
        reverse = reverse * 10 + r;
        n=n/10;
    }

    cout<<reverse<<endl;
  
  return 0;
}