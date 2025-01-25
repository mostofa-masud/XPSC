#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int mn = -1, mx = INT_MAX;
        int l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] < x)
            {
                mn = max(mn, mid);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (mn == -1)
            cout << 'X' << " ";
        else
            cout << v[mn] << " ";
        l = 0, r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] > x)
            {
                mx = min(mx, mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (mx == INT_MAX)
            cout << 'X' << " " << endl;
        else
            cout << v[mx] << endl;
    }
    return 0;
}