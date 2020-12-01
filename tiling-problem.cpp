/*
Tiling problem
Find the number of ways to tile the floor with 2xn and 2x1 tiles.
Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)
Time Complexity: O(2^n)
Space Complexity: O(2^n)
*/
#include <iostream>
using namespace std;

int tilingWays(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << tilingWays(n) << endl;
}
