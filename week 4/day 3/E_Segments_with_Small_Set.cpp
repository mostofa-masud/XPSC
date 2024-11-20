#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    int l = 0, r = 0, cnt = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                cnt--;
                mp.erase(v[l]);
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}