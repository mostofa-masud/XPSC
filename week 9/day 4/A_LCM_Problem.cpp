#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        if (2 * x > y)
            cout << -1 << " " << -1 << endl;
        else
            cout << x << " " << 2 * x << endl;
    }
    return 0;
}