#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += ar[r];
        while (sum >= s)
        {
            sum -= ar[l];
            l++;
        }
        ans += l;
        r++;
    }
    cout << ans << endl;
    return 0;
}