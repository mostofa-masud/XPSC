#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n;
    vector<int> v(n), vv;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
        vv.push_back(s);
    }
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout <<lower_bound(vv.begin(), vv.end(), x) - vv.begin() +1 << endl;
    }
    return 0;
}