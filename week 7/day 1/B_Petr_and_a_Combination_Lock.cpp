#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    bool flag = false;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
                cnt += ar[i];
            else
                cnt -= ar[i];
        }
        if (cnt % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}