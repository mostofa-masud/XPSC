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
        int a, b, n;
        cin >> a >> b >> n;
        int ar[n];
        int cnt = b;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            cnt += min(ar[i], a - 1);
        }
        cout << cnt << endl;
    }
    return 0;
}