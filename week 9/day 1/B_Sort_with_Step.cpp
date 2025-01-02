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
        int n, k;
        cin >> n >> k;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (abs(ar[i] - i) % k != 0)
                cnt++;
        }
        if (cnt == 0)
            cout << 0 << endl;
        else if (cnt == 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}