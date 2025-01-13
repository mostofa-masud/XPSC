#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int min_div(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
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
        int l, r;
        cin >> l >> r;
        bool flag = false;
        for (int i = l; i <= r; i++)
        {
            int md = min_div(i);
            if (md != i)
            {
                cout << md << " " << i - md << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
