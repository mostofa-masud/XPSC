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
        int ar[n];
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
                ans++;
            if (ar[i] == 0)
                cnt++;
        }
        cout << (1LL << cnt) * ans << endl;
    }
    return 0;
}