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
        int x, y, k;
        cin >> x >> y >> k;

        while (x > 1 && k > 0)
        {
            int d = y - x % y;
            if (d > k)
            {
                x += k;
                k = 0;
            }
            else
            {
                x += d;
                k -= d;
            }
            while (x % y == 0)
            {
                x /= y;
            }
        }
        if (x == 1)
        {
            x += k % (y - 1);
        }
        cout << x << endl;
    }
    return 0;
}