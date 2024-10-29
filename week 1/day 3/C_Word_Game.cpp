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
        map<string, int> mp;
        vector<string> v1, v2, v3;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v1.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v2.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v3.push_back(s);
            mp[s]++;
        }
        int c1 = 0, c2 = 0, c3 = 0;
        for (auto u : v1)
        {
            if (mp[u] == 1)
                c1 += 3;
            else if (mp[u] == 2)
                c1++;
        }
        for (auto u : v2)
        {
            if (mp[u] == 1)
                c2 += 3;
            else if (mp[u] == 2)
                c2++;
        }
        for (auto u : v3)
        {
            if (mp[u] == 1)
                c3 += 3;
            else if (mp[u] == 2)
                c3++;
        }
        cout << c1 << " " << c2 << " " << c3 << endl;
    }
    return 0;
}