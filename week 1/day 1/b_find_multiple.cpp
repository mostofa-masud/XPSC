#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = -1;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}