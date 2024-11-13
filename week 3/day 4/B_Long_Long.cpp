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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ans += abs(ar[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < 0)
            {
                while (i < n)
                {
                    if (ar[i] > 0)
                    {
                        break;
                    }
                    i++;
                }
                cnt++;
            }
        }
        cout << ans << " " << cnt << endl;
    }
    return 0;
}