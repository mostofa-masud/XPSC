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
        int n;
        cin >> n;
        int m = (n * (n - 1)) / 2;
        vector<int> v(m);
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.rbegin(), v.rend());

        vector<int> ans;
        int x = v[0];
        ans.push_back(x);
        ans.push_back(x);
        mp[x] -= 2;
        for (int i = 1; i < m; i++)
        {
            if (mp[v[i]] > 0)
            {
                mp[v[i]] -= ans.size();
                ans.push_back(v[i]);
            }
        }
        for (auto u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}