#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn = 0;
        int mx = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                mn++;
            else
                mx += 2;
        }
        vector<int> v;
        if (n % 2 == 0)
        {
            for (int i = 0; i < mn; i++)
                v.push_back(0);
            for (int i = mn; i <= n; i++)
            {
                if (mn % 2 == i % 2 && i <= mx + mn)
                    v.push_back(1);
                else
                    v.push_back(0);
            }
        }
        else
        {
            for (int i = 0; i < mn; i++)
                v.push_back(0);
            for (int i = mn; i <= n; i++)
            {
                if (i <= mx + mn + 1)
                    v.push_back(1);
                else
                    v.push_back(0);
            }
        }
        for (auto u : v)
            cout << u;
        cout << endl;
        // cout << mx << endl;
    }
    return 0;
}