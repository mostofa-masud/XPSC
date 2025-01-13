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
        int ar[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            m[ar[i]] = i + 1;
        }
        vector<int> v;
        for (auto u : m)
            v.push_back(u.first);
        n = v.size();
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (gcd(v[j], v[i]) == 1)
                    ans = max(ans, m[v[i]] + m[v[j]]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}