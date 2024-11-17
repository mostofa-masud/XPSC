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
        int n, c;
        cin >> n >> c;
        int ar[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back(ar[i] + i + 1);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > c)
                break;
            else
            {
                c -= v[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}