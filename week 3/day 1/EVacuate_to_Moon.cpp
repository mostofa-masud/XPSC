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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v1(n), v2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v2[i] = k * x;
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        int ans = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            ans += min(v1[i], v2[i]);
        }
        cout << ans << endl;
    }
    return 0;
}