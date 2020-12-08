/*
Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int profit=INT_MIN;
    int buy=0;
    int buyAmount=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<buyAmount)
        {
           buyAmount=a[i];
           buy=a[i];
        }
        else if(a[i]-buyAmount>profit){
            profit=a[i]-buyAmount;
        }
        
    }
    if(profit<buy)
    cout<<0<<endl;
    else{
    cout<<profit<<endl;
    }
}