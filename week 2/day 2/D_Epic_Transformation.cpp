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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int mx = 0;
        for (auto u : mp)
        {
            mx = max(mx, u.second);
        }
        if (mx <= n / 2)
        {
            cout << n % 2 << endl;
        }
        else
        {
            if (n % 2 == 0)
                cout << (mx - n / 2) * 2 << endl;
            else
                cout << ((mx - n / 2) * 2) - 1 << endl;
        }
    }
    return 0;
}