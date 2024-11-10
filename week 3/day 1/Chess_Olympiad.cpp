#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    z *= 2;
    if (y + z < 4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}