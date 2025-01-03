#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> p;
    for (int i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        string ss = s;
        reverse(s.begin(), s.end());
        if (s == ss)
            p.push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        unordered_map<int, int> m;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            m[ar[i]]++;
            for (auto u : p)
                cnt += m[u ^ ar[i]];
        }
        cout << cnt << endl;
    }
    return 0;
}