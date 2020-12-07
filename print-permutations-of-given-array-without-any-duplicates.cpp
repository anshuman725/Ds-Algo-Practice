#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permutations(vector<int> &a, int idx)
{

    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permutations(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &i:a)
     {
        cin >> i;
    }
    //permutations(a, 0);

    
    do{//using stl it can give ans for duplicates also;
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));    
    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}