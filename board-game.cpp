/*
we have to find the total path that can be taken in order to reach the end point with using dice value as the length taken to jump;

input : 0 3
output : 4

*/

#include <iostream>
using namespace std;

int jump(int s, int e)
{
    if (s == e)
    {
        return 1;
    }

    if (s > e)
        return 0;

    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += jump(s + i, e);
    }
    return count;
}

int main()
{
    int s, e;
    cin >> s >> e;

    cout << jump(s, e) << endl;
}
