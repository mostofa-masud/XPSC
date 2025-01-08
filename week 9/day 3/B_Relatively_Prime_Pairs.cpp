#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    int d = (r - l + 1) / 2;
    while (d--)
    {
        cout << l << " " << l + 1 << endl;
        l += 2;
    }
    return 0;
}