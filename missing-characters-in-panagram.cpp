/*
You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.

 

Example 1:

Input:
s = Abcdefghijklmnopqrstuvwxy
Output: z
 

Example 2:

Input:
s = Abc
Output: defghijklmnopqrstuvwxyz



*/
// { Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

// A panagram is a string with every letter in the english alphabet present in the string

string missingPanagram(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << missingPanagram(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++


string missingPanagram(string str){

 //Your code here
 string ans="";
 
 bool check[26]={0};
 
 for(int i=0;i<str.length();i++)
 {
     if(str[i]>='a'&&str[i]<='z')
     {
         check[str[i]-'a']=1;
     }
     if(str[i]>='A'&&str[i]<='Z')
     {
         check[str[i]-'A']=1;
     }
 }
 
 for(int i=0;i<26;i++)
 {
     if(check[i]==0)
     {
          ans.push_back((char)i+'a');
     }
 }
 return ans;
 
    
}
