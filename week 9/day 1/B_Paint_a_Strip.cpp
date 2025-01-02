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
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n < 5)
        {
            cout << 2 << endl;
            continue;
        }
        int ans = 2;
        int cnt = 4;
        while (cnt < n)
        {
            ans++;
            cnt++;
            cnt *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}