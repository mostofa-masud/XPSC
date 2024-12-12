#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            m[ar[i]]++;
        }
        vector<int> v;
        for (auto u : m)
        {
            if (u.second >= k)
                v.push_back(u.first);
        }
        if (v.empty())
        {
            cout << -1 << endl;
            continue;
        }
        vector<pair<int, int>> ans;
        int l = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] != v[i - 1] + 1)
            {
                ans.push_back({l, v[i - 1]});
                l = v[i];
            }
        }
        ans.push_back({l, v.back()});
        int L = ans[0].first, R = ans[0].second;
        for (auto u : ans)
        {
            if (u.second - u.first > R - L)
            {
                L = u.first;
                R = u.second;
            }
        }
        cout << L << " " << R << endl;
    }
    return 0;
}
