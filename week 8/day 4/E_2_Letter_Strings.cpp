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
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            m[s]++;
        }
        vector<string> v;
        for (auto u : m)
            v.push_back(u.first);
        n = v.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string s = v[i];
                string ss = v[j];
                if ((s[0] == ss[0] && s[1] != ss[1]) || (s[0] != ss[0] && s[1] == ss[1]))
                    ans += (m[s] * m[ss]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}