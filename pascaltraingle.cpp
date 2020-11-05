#include<iostream>
using namespace std;

int fact(int n)
{
    int p=1;
    for(int i=2;i<=n;i++)
    {
       p*=i;
    }
    return p;
}
int main()
{
    int n;
    cout<<"Enter the rows for traingle"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}