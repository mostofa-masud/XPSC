#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int N = 1e9 + 7;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ans = 1;
        for (int i = 2; i <= n; i++)
        {
            ans = (ans * (i % N)) % N;
        }
        cout << ans << endl;
    }
    return 0;
}