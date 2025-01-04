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
        int l = __lg(n);
        int a = (n & ~(1 << l));
        l = __lg(a);
        int ans = 0;
        for (int i = 0; i < l; i++)
        {
            if (a >> i & 1)
                continue;
            else
                ans++;
        }
        cout << (1 << ans) << endl;
    }
    return 0;
}