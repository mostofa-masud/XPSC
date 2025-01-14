#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> m;
    for (int i = 0; i < n; i++)
        m[s[i]]++;
    int cnt = 0;
    for (auto u : m)
        if (u.second % 2 == 1)
            cnt++;
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    s.clear();
    string t;
    for (auto u : m)
    {
        if (u.second % 2 == 1)
        {
            for (int i = 0; i < u.second; i++)
                t.push_back(u.first);
        }
        else
        {
            for (int i = 0; i < u.second / 2; i++)
                s.push_back(u.first);
        }
    }
    cout << s << t;
    for (int i = s.size() - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;
    return 0;
}