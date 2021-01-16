/*
Example 1:

Input:
str = testsample
    
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.



*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends


// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str)
{
    // Your code here
    int arr[256]={0};
    int max=INT_MIN;
    char c;
    for(int i=0;str[i]!='\0';i++)
    {
        arr[str[i]]++;
    }
    
    for(int i=0;i<256;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            c=i;
        }
    }
    
   
    return c;
}
