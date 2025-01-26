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
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int d = 1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == d)
                d++;
        }
        if ((n - d + 1) % k == 0)
            cout << (n - d + 1) / k << endl;
        else
            cout << (n - d + 1) / k + 1 << endl;
    }
    return 0;
}