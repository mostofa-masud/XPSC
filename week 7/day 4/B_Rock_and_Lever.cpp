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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[__lg(x)]++;
        }
        int cnt = 0;
        for (auto u : m)
        {
            cnt += (u.second * (u.second - 1)) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}