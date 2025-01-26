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
        int n, k;
        cin >> n >> k;
        int ar[n], br[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back({ar[i], i});
        }
        for (int i = 0; i < n; i++)
            cin >> br[i];
        sort(v.begin(), v.end());
        sort(br, br + n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[v[i].second] = br[i];
        }
        for (auto u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}