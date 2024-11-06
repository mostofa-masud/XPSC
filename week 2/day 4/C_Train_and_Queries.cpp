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
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (mp.find(x) == mp.end())
            {
                mp[x] = {i, i};
            }
            else
            {
                mp[x].second = i;
            }
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;

            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                if (mp[a].first < mp[b].second)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}
