#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;

    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }

    while (m--)
    {
        string s1, ip;
        cin >> s1 >> ip;
        ip.pop_back();

        cout << s1 << " " << ip << "; #" << mp[ip] << endl;
    }

    return 0;
}