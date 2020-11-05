#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no." << endl;
    cin >> n;
    bool flag = 0;     
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           cout<<"Non Prime no."<< endl;
            flag=1;
           break;
        }
       
    }
    
    if(flag == 0)
    {
        cout<<"Prime no."<<endl;
    }
    return 0;
}