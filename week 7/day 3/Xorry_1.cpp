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
        int n;
        cin >> n;
        int l = __lg(n);
        int a = (n & ~(1 << l));
        int b = (1 << l);
        cout << a << " " << b << endl;
    }
    return 0;
}