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
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<int> v(31, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if ((ar[i] >> j) & 1)
                    v[j]++;
            }
        }
        int cnt = 0;
        for (int i = 30; i >= 0; i--)
        {
            int need = n - v[i];
            if (need <= k)
            {
                cnt += (1 << i);
                k -= need;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}