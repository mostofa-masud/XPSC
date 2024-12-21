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
        string s;
        cin >> n >> s;
        vector<char> v, vv;
        bool flag = false;
        int ans = INT_MAX;
        for (char c = 'a'; c <= 'z'; c++)
        {
            v.clear();
            vv.clear();
            for (int i = 0; i < n; i++)
            {
                if (s[i] != c)
                {
                    v.push_back(s[i]);
                    vv.push_back(s[i]);
                }
            }
            reverse(vv.begin(), vv.end());
            if (v == vv)
            {
                flag = true;
                int l = 0;
                int r = n - 1;
                int cnt = 0;
                while (r > l)
                {
                    if (s[l] == s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        cnt++;
                        if (s[l] == c)
                            l++;
                        else
                            r--;
                    }
                }
                ans = min(ans, cnt);
            }
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}