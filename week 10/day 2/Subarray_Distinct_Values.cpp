#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    unordered_map<int, int> m;
    int l = 0, r = 0, cnt = 0, ans = 0;
    while (r < n)
    {
        if (m[ar[r]] == 0)
            cnt++;
        m[ar[r]]++;
        while (l < n && cnt > k)
        {
            m[ar[l]]--;
            if (m[ar[l]] == 0)
                cnt--;
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl;
    return 0;
}