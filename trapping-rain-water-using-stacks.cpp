#include <bits/stdc++.h>
using namespace std;

int rainWater(vector<int> a)
{
    int n = a.size();
    int ans = 0;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int cur = st.top();
            st.pop();

            if (st.empty())
            {
                break;
            }
            int diff = i - st.top() - 1;

            ans += (min(a[st.top()], a[i]) - a[cur]) * diff;
        }

        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rainWater(a) << endl;
}