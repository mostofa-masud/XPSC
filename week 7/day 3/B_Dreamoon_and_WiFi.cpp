#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed << setprecision(12);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
            cnt++;
        else
            cnt--;
    }
    int c = 0, c1 = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '+')
            c++;
        else if (t[i] == '-')
            c--;
        else
            c1++;
    }
    if (cnt == c && c1 == 0)
    {
        double ans = 1;
        cout << ans << endl;
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < (1 << c1); i++)
    {
        int x = c;
        for (int j = 0; j < c1; j++)
        {
            if ((i >> j) & 1)
                x++;
            else
                x--;
        }
        if (x == cnt)
            ans++;
    }
    cout << (ans * 1.0) / ((1 << c1) * 1.0) << endl;

    return 0;
}