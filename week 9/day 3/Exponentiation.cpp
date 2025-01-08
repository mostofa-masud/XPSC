#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e9 + 7;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (b == 0)
        {
            cout << 1 << endl;
            continue;
        }
        int ans = 1;
        while (b > 0)
        {
            if (b % 2 == 1)
            {
                ans = (ans * a) % N;
            }
            a = (a * a) % N;
            b /= 2;
        }

        cout << ans << endl;
    }
    return 0;
}
