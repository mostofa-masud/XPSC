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
    int sum = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] >= s)
            flag = true;
        sum += ar[i];
    }
    if (sum < s)
        cout << -1 << endl;
    else if (flag)
        cout << 1 << endl;
    else
    {
        int l = 0, r = 0;
        sum = 0;
        int ans = n;
        while (r < n)
        {
            sum += ar[r];
            while (sum >= s)
            {
                ans = min(ans, r - l + 1);
                sum -= ar[l];
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}