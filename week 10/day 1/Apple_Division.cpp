#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                s += ar[j];
            }
        }
        ans = min(ans, abs(sum - 2 * s));
    }
    cout << ans << endl;
    return 0;
}