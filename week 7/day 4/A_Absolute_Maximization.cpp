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
        int mx, mn;
        cin >> mx;
        mn = mx;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            mx = mx | x;
            mn = mn & x;
        }
        cout << mx - mn << endl;
    }
    return 0;
}