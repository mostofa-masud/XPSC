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
        map<int, int> mp;
        int i;
        bool flag = false;
        for (i = n - 1; i >= 0; i--)
        {
            if (mp[ar[i]] > 0)
            {
                flag = true;
                break;
            }

            mp[ar[i]]++;
        }
        if (flag)
            cout << i + 1 << endl;
        else
            cout << 0<< endl;
    }
    return 0;
}