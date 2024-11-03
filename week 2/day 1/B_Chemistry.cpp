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
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (n == 2 && k == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
        for (auto u : mp)
        {
            if (u.second % 2 != 0)
            {
                cnt++;
            }
        }
        if (k >= cnt - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}