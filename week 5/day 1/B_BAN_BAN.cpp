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
        cout << (n + 1) / 2 << endl;
        int j = 0;
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            cout << j + 1 << " " << (3 * n) - j << endl;
            j += 3;
        }
    }
    return 0;
}
