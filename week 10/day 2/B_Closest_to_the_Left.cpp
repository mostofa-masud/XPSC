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
    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        int mid;
        //bool flag = false;
        int ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ar[mid] <= x)
            {
                ans = max(ans, mid + 1);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}