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
        int n, k, q;
        cin >> n >> k >> q;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= q)
            {
                int cnt = 0;
                while (i < n)
                {
                    if (ar[i] > q)
                        break;
                    cnt++;
                    i++;
                }
                if (cnt >= k)
                {
                    int x = cnt - k + 1;
                    ans += ((x * (x + 1)) / 2);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}