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
        vector<int> v1, v2;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (br[i] - ar[i] > 0)
                v1.push_back(br[i] - ar[i]);
            else if (br[i] - ar[i] < 0)
                v2.push_back(ar[i] - br[i]);
            else
                cnt++;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0;
        for (int i = v2.size() - 1; i >= 0; i--)
        {
            if (!v1.empty() && v2[i] <= v1.back())
            {
                v1.pop_back();
                ans++;
            }
        }
        ans += (v1.size() + cnt) / 2;
        cout << ans << endl;
    }
    return 0;
}