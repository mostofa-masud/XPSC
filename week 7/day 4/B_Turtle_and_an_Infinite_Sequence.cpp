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
        int n, m;
        cin >> n >> m;
        int mn = max(0ll, n - m), mx = m + n;
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (mn >> i != mx >> i)
                ans += (1 << i);
            else if ((mn >> i) % 2 == 1)
                ans += (1 << i);
        }
        cout << ans << endl;
    }
    return 0;
}