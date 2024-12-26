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
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (ar[i] == ar[ar[ar[i]]])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}