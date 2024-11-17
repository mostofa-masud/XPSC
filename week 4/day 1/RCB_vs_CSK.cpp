#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    x -= 18;
    if (y > x)
        cout << "CSK" << endl;
    else
        cout << "RCB" << endl;
    return 0;
}