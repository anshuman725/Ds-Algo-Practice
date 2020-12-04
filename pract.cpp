#include <iostream>
using namespace std;
void pairs(int a, int b)
{

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int a1[a];
	int b1[b];
	
	int j=1;
	for (int i = 0; i < a; i++)
	{
	     
		a1[i] =j;
		j++;
	}
	j=1;
	for (int i = 0; i < b; i++)
	{		 

		b1[i] = j;
		j++;
	}
	for (int i = 0; i < a; i++)
	{
		if(a1[i]%2==0)
		{
			count1++;
		}
		else{
			count3++;
		}
	}

	for (int i = 0; i < b; i++)
		{
			if(b1[i]%2==0)
			{
				count2++;
			}else{
				count4++;
			}
		}

		cout<< count1 * count2 + count3 * count4<<endl;
}

int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int a, b;
	cin >> a >> b;
	pairs(a, b);
}
	return 0;
}
