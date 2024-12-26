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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (ar[i] >= ar[i + 1])
            {
                ar[i] = ar[i] / 2;
                cnt++;
                if (ar[i] == 0)
                    break;
            }
        }
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] >= ar[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}