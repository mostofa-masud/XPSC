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
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (b % 2 == 0)
        {
            int x = b / 2;
            a -= (7 * x);
            ans += x;
            if (a > 0)
            {
                if (a % 15 == 0)
                    ans += (a / 15);
                else
                    ans += ((a / 15) + 1);
            }
        }
        else
        {
            int x = (b / 2) + 1;
            ans += x;
            a -= (7 * (x - 1));
            a -= 11;
            if (a > 0)
            {
                if (a % 15 == 0)
                    ans += (a / 15);
                else
                    ans += ((a / 15) + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}