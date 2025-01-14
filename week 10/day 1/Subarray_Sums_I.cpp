#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int cnt = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        cnt += ar[r];
        while (cnt > k)
        {
            cnt -= ar[l];
            l++;
        }
        if (cnt == k)
            ans++;
        r++;
    }
    cout << ans << endl;
    return 0;
}