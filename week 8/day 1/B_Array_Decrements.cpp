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
        int ar[n], br[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];
        bool flag = true;
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] - br[i] < 0)
            {
                flag = false;
                break;
            }
            d = max(d, ar[i] - br[i]);
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] - br[i] < d && br[i] != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}