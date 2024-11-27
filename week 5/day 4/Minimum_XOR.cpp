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
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int x = ar[0];
        for (int i = 1; i < n; i++)
            x = x ^ ar[i];
        int mn = x;
        for (int i = 0; i < n; i++)
            mn = min(mn, x ^ ar[i]);
        cout << mn << endl;
    }
    return 0;
}