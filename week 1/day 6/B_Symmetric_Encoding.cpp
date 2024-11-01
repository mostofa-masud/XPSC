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
        string s, t;
        cin >> s;
        t = s;
        sort(s.begin(), s.end());
        map<char, char> mp;
        vector<char> v;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                v.push_back(s[i]);
        }
        v.push_back(s[n - 1]);

        int k = v.size();
        for (int i = 0; i < k; i++)
        {
            mp[v[i]] = v[k - i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << mp[t[i]];
        }
        cout << endl;
    }
    return 0;
}