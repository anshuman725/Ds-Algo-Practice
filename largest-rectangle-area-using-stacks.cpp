#include<bits/stdc++.h>
using namespace std;

int reactangleArea(int n,int a[])
{
    stack<int>st;
    int i=0;
    int ans=0;

    while(i<n)
    {
        while(!st.empty()&&a[st.top()]>a[i])
        {
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
            ans=max(ans,h*i);
            }
            else{
                int l=i-st.top()-1;
                ans=max(ans,h*l);
            }
        }
        st.push(i);
        i++;
    }
    return ans;

}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<reactangleArea(n,a)<<endl;
}