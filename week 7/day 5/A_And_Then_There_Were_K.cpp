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
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < __lg(n); i++)
        {
            ans += (1 << i);
        }
        cout << ans << endl;
    }
    return 0;
}