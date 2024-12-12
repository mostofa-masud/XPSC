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
            cin >> ar[i];
        int k = 0;
        while (k < n && ar[k] == 0)
            k++;
        int cnt = 0;
        for (int i = k; i < n - 1; i++)
        {
            cnt += ar[i];
            if (ar[i] == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}