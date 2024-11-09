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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        int ans = mp.begin()->second;
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if (it == mp.begin())
                continue;
            auto ip = it;
            --ip;
            if (it->first != ip->first + 1)
            {
                ans += it->second;

            }
            else
            {
                if (it->second > ip->second)
                {
                    ans += (it->second - ip->second);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}