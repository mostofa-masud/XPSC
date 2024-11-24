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
        {
            cin >> ar[i];
        }
        int cnt[200005];
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            cnt[ar[i]]++;
            cout << char('a' + (cnt[ar[i]]-1));
        }
        cout << endl;
    }
    return 0;
}