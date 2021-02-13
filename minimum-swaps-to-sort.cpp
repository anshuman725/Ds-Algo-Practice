/*
Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.


Example 1:

Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
Example 2:

Input:
nums = {10, 19, 6, 3, 5}
Output:
2
Explaination:
swap 10 with 3 and swap 19 with 5.
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
public:
    int minSwaps(vector<int> &nums)
    {
        // Code here
        int n = nums.size();
        int count = 0;
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i].first = nums[i];
            v[i].second = i;
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (i == v[i].second)
            {
                continue;
            }
            else
            {
                count++;
                swap(v[i], v[v[i].second]);
                i--;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        int ans = obj.minSwaps(nums);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends