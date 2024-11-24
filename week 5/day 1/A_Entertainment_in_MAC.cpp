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
        reverse(t.begin(), t.end());
        if (s <= t)
        {
            cout << s << endl;
        }
        else
        {
            cout << t << s << endl;
        }
    }
    return 0;
}