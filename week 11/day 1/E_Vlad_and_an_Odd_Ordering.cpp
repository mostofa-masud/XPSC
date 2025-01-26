#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int fun(int n, int k)
{
    if (n == 1)
        return 1;
    int oc = (n + 1) / 2;
    if (k <= oc)
    {
        return 2 * k - 1;
    }
    else
    {
        return 2 * fun(n / 2, k - oc);
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        cout << fun(n, k) << endl;
    }
    return 0;
}