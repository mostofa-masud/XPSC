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
        vector<int> ar(n), v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back(ar[i]);
        }
        int ans = 0, cnt = 0, ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
                cnt++;
            if (ar[i] == 0)
                ans1 += cnt;
        }
        ans = ans1;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 0)
            {
                ar[i] = 1;
                break;
            }
        }
        ans1 = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
                cnt++;
            if (ar[i] == 0)
                ans1 += cnt;
        }
        ans = max(ans, ans1);

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }
        ans1 = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                cnt++;
            if (v[i] == 0)
                ans1 += cnt;
        }
        ans = max(ans, ans1);

        cout << ans << endl;
    }
    return 0;
}