/*
Example 1:

Input:
n = 5
Output: V
 

Example 2:

Input:
n = 3
Output: III

*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


string convertToRoman(int ) ;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	cout << convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int number) 
{
    //Your code here
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};	
  string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	int i=12; 
	string ans="";
	while(number>0)
	{
	int div = number/num[i];
	number = number%num[i];
	while(div--)
	{
		ans+=sym[i];
	}
	i--;
	}
	return ans;
}