#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k != x)
            cout << k << " ";
    }
    cout << endl;
    return 0;
}