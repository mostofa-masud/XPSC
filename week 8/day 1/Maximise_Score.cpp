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
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int ans = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            ans = min(ans, max(abs(ar[i] - ar[i - 1]), abs(ar[i] - ar[i + 1])));
        }
        ans = min(ans, abs(ar[0] - ar[1]));
        ans = min(ans, abs(ar[n - 1] - ar[n - 2]));
        cout << ans << endl;
    }
    return 0;
}