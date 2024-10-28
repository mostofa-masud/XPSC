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
    map<pair<string, string>, int> mp;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        mp[{x, y}]++;
    }
    int sz = mp.size();
    cout <<sz << endl;
    return 0;
}