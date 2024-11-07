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
        string s;
        cin >> s;
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                v1.push_back(ar[i]);
            else
                v2.push_back(ar[i]);
        }
        if (v1.empty() || v2.empty())
        {
            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";
            }
            cout << endl;
            continue;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        map<int, int> mp;
        int x = 1;
        for (auto u : v1)
        {
            mp[u] = x;
            x++;
        }
        for (auto u : v2)
        {
            mp[u] = x;
            x++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << mp[ar[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}