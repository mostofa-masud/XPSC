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
        int n;
        cin >> n;
        vector<int> a(n), b(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        a[0] = b[0];
        a[n - 1] = b[n - 2];
        for (int j = 1; j < n - 1; j++)
            a[j] = b[j] | b[j - 1];
        bool flag = true;
        for (int j = 0; j < n - 1; j++)
            if (b[j] != (a[j] & a[j + 1]))
                flag = false;
        if (!flag)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}