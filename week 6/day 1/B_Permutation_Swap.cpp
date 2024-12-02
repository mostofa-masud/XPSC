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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<int> v;
        for (int i = 0; i < n; i++)
            v.push_back(abs(ar[i] - (i + 1)));
        int ans = v[0];
        for (int i = 0; i < n; i++)
            ans = gcd(ans, v[i]);
        cout << ans << endl;
    }
    return 0;
}