#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
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
        int x;
        cin >> x;
        for (int i = 1; i < n; i++)
        {
            int d;
            cin >> d;
            x = x & d;
        }
        cout << x << endl;
    }
    return 0;
}