#include<bits/stdc++.h>
using namespace std;

string decimaltohexadecimal(int n)
{
  int x=1;
  string ans="";
  int l;

  while(x<=n)
  {
      x*=16;
  }
  x/=16;

  while(n!=0)
  {
       l=n/x;
       n-=l*x;
       x/=16;

       if(l<=9)
       {
           ans = ans+to_string(l);
       }
       else
       {
           char c ='A' + l-10;
           ans.push_back(c);
       }
       

  }
  return ans;
  
}

int main()
{
    int n;
    cin>>n;
    cout<<decimaltohexadecimal(n)<<endl;
}