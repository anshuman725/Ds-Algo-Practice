//src hel dse
//a   b    c

//src dse helper
//hel dse src



#include<iostream>
using namespace  std;

void hanoi(int n,char src,char helper,char dest)
{
    if(n==0)
    return;  
    hanoi(n-1,src,dest,helper);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    hanoi(n-1,helper,dest,src);

}

int main()
{
    int n;
    cin>>n;

    hanoi(n,'A','B','C');
}