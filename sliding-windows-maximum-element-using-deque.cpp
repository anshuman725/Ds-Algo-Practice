#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Size of array" << endl;
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Window Size" << endl;
    int k;
    cin >> k;

    

    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while(!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}