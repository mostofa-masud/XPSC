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
        int ar[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i][0]]++;
        }
        int x, y;
        for (auto u : mp)
        {
            if (u.second == 1)
                x = u.first;
            else
                y = u.first;
        }
        cout << y << " ";
        for (int i = 0; i < n; i++)
        {
            if (ar[i][0] == x)
            {
                for (int j = 0; j < n - 1; j++)
                    cout << ar[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}