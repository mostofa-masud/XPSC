#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int x = n / a;
    int y = n / b;
    int z = lcm(a, b);
    int com = n / z;
    int ans;
    if (p > q)
    {
        ans = p * x;
        ans += (q * (y - com));
    }
    else
    {
        ans = q * y;
        ans += p * (x - com);
    }
    cout << ans << endl;
    return 0;
}