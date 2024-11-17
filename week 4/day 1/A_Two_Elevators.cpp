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
        int a, b, c;
        cin >> a >> b >> c;
        int x = abs(a - 1);
        int y = abs(b - c) + abs(c - 1);
        if (x == y)
            cout << 3 << endl;
        else if (x < y)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}