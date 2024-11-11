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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0;
        int ans = INT_MAX;
        int cnt = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                cnt++;
            if (r - l + 1 == k)
            {
                ans = min(ans, cnt);
                if (s[l] == 'W')
                    cnt--;
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}