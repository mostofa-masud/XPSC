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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> t(m);
        for (int i = 0; i < m; i++)
        {
            cin >> t[i];
        }
        sort(t.begin(), t.end());
        while (q--)
        {
            int x;
            cin >> x;
            int d = upper_bound(t.begin(), t.end(), x) - t.begin();
            if (d == 0)
            {
                cout << t[0] - 1 << endl;
            }
            else if (d == m)
                cout << n - t[d - 1] << endl;
            else
            {
                cout << (t[d] - t[d - 1]) / 2 << endl;
            }
        }
    }
    return 0;
}