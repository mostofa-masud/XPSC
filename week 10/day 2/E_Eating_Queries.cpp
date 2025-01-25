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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<int> vv;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += v[i];
            vv.push_back(s);
        }
        while (q--)
        {
            int x;
            cin >> x;
            if (x > sum)
            {
                cout << -1 << endl;
                continue;
            }
            int l = 0, r = n - 1, mid;
            int ans = n;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (vv[mid] >= x)
                {
                    ans = min(ans, mid + 1);
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            cout << ans << endl;
        }
    }
    return 0;
}