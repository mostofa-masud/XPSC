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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int rr = r - v[i];
            int ll = l - v[i];
            ans += (upper_bound(v.begin() + 1 + i, v.end(), rr) - lower_bound(v.begin() + 1 + i, v.end(), ll));
        }
        cout << ans << endl;
    }
    return 0;
}