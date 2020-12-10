#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
   
    int q = 2;
    int len = 1;
    int x = 0;
    int arr[100000] = {0};
    arr[0] = 1;
    int num;
    while (q <= n)
        {
            x=0;
            num=0;
            while (x < len)
            {

                arr[x] = arr[x]* q;
                arr[x] =arr[x]+ num;
                num =arr[x]/ 10;
                arr[x] %= 10;
                x++;
            }
            
            while (num != 0)
            {
                arr[len] = num % 10;
                num /= 10;
                len++;
            }
            q++;
        }
        len--;
        while (len>=0)
        {
            cout << arr[len];
            len--;
        }cout<<endl;
        return 0;
}

int main()
{
    //code
   int N;
   cin>>N;
    int n;
   while(N--){
        cin >> n;
        fact(n);

    }
    return 0;
}