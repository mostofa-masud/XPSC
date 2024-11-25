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
        int ar[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            m[ar[i]]++;
        }
        if (m.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = INT_MIN;
        for (auto u : m)
            mx = max(mx, u.second);

        int cnt = 0;
        while (mx < n)
        {
            cnt++;
            int d = mx;
            while (d--)
            {
                mx++;
                cnt++;
                if (mx == n)
                    break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}