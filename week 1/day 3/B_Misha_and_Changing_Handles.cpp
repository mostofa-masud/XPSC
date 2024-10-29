#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> mp;
    vector<pair<string, string>> v;
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        if (mp[s] == 0)
        {
            mp[s] = 1;
            mp[t] = 1;
            v.push_back({s, t});
            continue;
        }
        if (mp[t] == 1)
            continue;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second == s)
            {
                v[i].second = t;
                mp[t] = 1;
            }
        }
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}