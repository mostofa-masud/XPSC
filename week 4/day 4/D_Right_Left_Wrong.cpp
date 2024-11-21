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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
                ar[i] = x;
            else
                ar[i] = ar[i - 1] + x;
        }

        string s;
        cin >> s;
        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            while (l < n)
            {
                if (s[l] == 'L')
                    break;
                l++;
            }
            while (r >= 0)
            {
                if (s[r] == 'R')
                    break;
                r--;
            }
            if (l < r)
            {
                if (l > 0)
                    ans += ar[r] - ar[l - 1];
                else
                    ans += ar[r];
            }
            l++;
            r--;
        }
        cout << ans << endl;
    }
    return 0;
}