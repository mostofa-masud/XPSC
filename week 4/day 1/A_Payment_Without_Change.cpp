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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        if ((a * n) + b < s)
        {
            cout << "NO" << endl;
        }
        else
        {
            int d = s / n;
            int x = d * n;
            if (s - x > b)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}