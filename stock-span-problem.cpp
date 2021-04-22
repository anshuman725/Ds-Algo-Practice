#include <bits/stdc++.h>

using namespace std;

vector<int> stockSpan(vector<int> a)
{

    vector<int> ans;
    stack<pair<int, int>> st;

    for (auto i : a)
    {
        int days = 1;
        while (!st.empty() && st.top().first <= i)
        {
            days += st.top().second;
            st.pop();
        }
        st.push({i, days});
        ans.push_back(days);
    }
    return ans;
}

int main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockSpan(a);

    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
}
