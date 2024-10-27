#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans;
    if (a == b)
        ans = a + b;
    else
        ans = max(a, b) + max(a, b) - 1;
    cout << ans << endl;
    return 0;
}