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
    bool flag = false;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] <= s)
            flag = true;
    }
    int l = 0, r = 0;
    int sum = 0;
    int ans = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
        {
            ans = max(r - l + 1, ans);
        }
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    if (!flag)
        cout << 0 << endl;
    else
        cout << ans << endl;
    return 0;
}