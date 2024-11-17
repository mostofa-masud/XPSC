#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
class cmp
{
public:
    bool operator()(pair<char, int> a,pair<char, int> b)
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int m = abs(s[0] - s[n - 1]);

        map<int, int> mp;
        for (auto u : s)
        {
            mp[u]++;
        }
        int cnt = 0;
        char mn, mx;
        if (s[0] <= s[n - 1])
        {
            mn = s[0];
            mx = s[n - 1];
        }
        else
        {
            mn = s[n - 1];
            mx = s[0];
        }
        vector<pair<char, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                v.push_back({s[i], i + 1});
            }
        }
        if (s[0] <= s[n - 1])
            sort(v.begin(), v.end());
        else
            sort(v.begin(), v.end(), cmp());
        for (auto u : mp)
        {
            if (u.first >= mn && u.first <= mx)
                cnt += u.second;
        }

        cout << m << " " << cnt << endl;
        for (auto u : v)
            cout << u.second << " ";
        cout << endl;
    }
    return 0;
}