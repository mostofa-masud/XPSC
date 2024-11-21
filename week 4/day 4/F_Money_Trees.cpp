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
        int ar[n], br[n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] <= k)
                flag = false;
        }
        for (int i = 0; i < n; i++)
            cin >> br[i];

        int l = 0, r = 0, cnt = 0, ans = 0;
        while (r < n)
        {
            if (cnt == 0)
            {
                cnt += ar[r];
            }
            else
            {
                if (br[r - 1] % br[r] == 0)
                {
                    cnt += ar[r];
                }
                else
                {
                    cnt = 0;
                    l = r;
                    cnt += ar[r];
                }
            }

            while (cnt > k)
            {
                cnt -= ar[l];
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}