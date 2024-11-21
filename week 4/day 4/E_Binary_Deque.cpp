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
        int n, k, s = 0;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            s += ar[i];
        }
        if (s < k)
        {
            cout << -1 << endl;
            continue;
        }
        int l = 0, r = 0, cnt = 0, ans = 0;
        while (r < n)
        {
            cnt += ar[r];
            if (cnt > k)
            {
                cnt -= ar[l];
                l++;
            }
            ans = max(r - l + 1, ans);
            r++;
        }
        cout << n - ans << endl;
    }
    return 0;
}