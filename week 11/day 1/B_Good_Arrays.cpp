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
        int ar[n];
        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
            if (ar[i] == 1)
                cnt++;
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sum < ((2 * cnt) + (n - cnt)))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}