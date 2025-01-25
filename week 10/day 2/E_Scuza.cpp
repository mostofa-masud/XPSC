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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int mx = v[0], s = 0;
        vector<int> mxa, pre;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
            mxa.push_back(mx);
            s += v[i];
            pre.push_back(s);
        }

        while (q--)
        {
            int x;
            cin >> x;
            int d = upper_bound(mxa.begin(), mxa.end(), x) - mxa.begin();
            if (d > 0)
                cout << pre[d - 1] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}