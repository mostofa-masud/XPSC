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
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        int s = 0, ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            s += ar[i];
            sum -= ar[i];
            ans = max(ans, gcd(s, sum));
        }
        cout << ans << endl;
    }
    return 0;
}