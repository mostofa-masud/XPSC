#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        int l = 1, r = n;
        int max = n, min = 1;
        while (l <= r)
        {
            if (ar[l] == min)
            {
                l++;
                min++;
            }
            else if (ar[r] == max)
            {
                r--;
                max--;
            }
            else if (ar[l] == max)
            {
                l++;
                max--;
            }
            else if (ar[r] == min)
            {
                min++;
                r--;
            }
            else
                break;
        }
        if (l > r)
            cout << -1 << endl;
        else
            cout << l << " " << r << endl;
    }
    return 0;
}