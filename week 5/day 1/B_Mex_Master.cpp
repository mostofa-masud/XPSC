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
        int cnt0 = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 0)
                cnt0++;
            if (ar[i] > 1)
                flag = true;
        }
        if (cnt0 <= (n + 1) / 2)
            cout << 0 << endl;
        else if (flag)
            cout << 1 << endl;
        else if (cnt0 == n)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}