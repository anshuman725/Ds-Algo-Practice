// Given a number as string(n) , find the remainder of the number whe it is divided by 7

// Example 1:

// Input:
// 5
// Output:
// 5
 

// Example 2:

// Input:
// 8
// Output:
//1


// { Driver Code Starts
#include <iostream>
using namespace std;
int remainderWith7(string );

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;

cout<<remainderWith7(n)<<endl;

}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int remainderWith7(string n)
{
    //Your code here
    // other approach
        //int rem = 0;
        //  for(int i=0;i<n.size();i++)
        // {
        //     rem = rem*10+(n[i]-'0');
        //     rem=rem%7;
        // }
        // return rem;
        
        int arr[]={1,3,2,-1,-3,-2};
        
        int ans=0;
        int j=0;
        
        for(int i=n.size()-1;i>=0;i--)
        {
            ans+=arr[j%6]*(n[i]-'0');
            ans=ans%7;
            j++;
        }
        
        return ans<0?(ans+7)%7:ans;
}