#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[v[i]] == 0)
        {
            string s = v[i];
            cout << s[s.size() - 2]<<s.back();
            mp[v[i]]++;
        }
    }
    return 0;
}