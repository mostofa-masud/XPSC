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
        int n, xo = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            xo = xo ^ ar[i];
        }
        int ans = xo;
        for (int i = 0; i < n; i++)
            ar[i] = ar[i] ^ xo;
        xo = 0;
        for (int i = 0; i < n; i++)
        {
            xo = xo ^ ar[i];
        }
        if (xo == 0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}