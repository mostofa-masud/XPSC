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
        int ans;
        cin >> ans;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            ans = (ans | x);
        }
        cout << ans << endl;
    }
    return 0;
}