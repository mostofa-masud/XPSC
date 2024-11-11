#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ar[n], br[m];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < m; i++)
        cin >> br[i];
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt1 = 1;
        while (i + 1 < n && ar[i] == ar[i + 1])
        {
            i++;
            cnt1++;
        }
        while (j < m && br[j] < ar[i])
        {
            j++;
        }
        int cnt2 = 0;
        while (j < m && br[j] == ar[i])
        {
            j++;
            cnt2++;
        }
        ans += cnt1 * cnt2;
    }
    cout << ans << endl;
    return 0;
}
