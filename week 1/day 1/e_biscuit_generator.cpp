#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    int x = (t / a);
    int ans = x * b;
    cout << ans << endl;
    return 0;
}