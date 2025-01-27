#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        set<int> s;
        int d;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            s.insert(d);
        }
        vector<int> v;
        for (auto u : s)
            v.push_back(u);
        int mx = 1;
        int l = 0, r = 0;
        while (r < v.size())
        {
            while (v[r] - v[l] >= n)
            {
                l++;
            }
            mx = max(r - l + 1, mx);
            r++;
        }
        cout << mx << endl;
    }
    return 0;
}