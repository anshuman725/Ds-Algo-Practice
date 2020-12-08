/*
Input:
ar1[] = {1, 5, 10, 20, 40, 80}
ar2[] = {6, 7, 20, 80, 100}
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20, 80

Input:
ar1[] = {1, 5, 5}
ar2[] = {3, 4, 5, 5, 10}
ar3[] = {5, 5, 10, 20}
Output: 5, 5
*/
#include<iostream>
using namespace std;

void comman(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j] && b[j]==c[k])
        {
            cout<<a[i]<<" ";
            i++;j++;k++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }else if(b[j]<c[k])
        {
            j++;
        }
        else{
            k++;
        }
    }
}

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    for(int i=0;i<n2;i++)
        cin>>c[i];

    comman(a,b,c,n1,n2,n3);
}