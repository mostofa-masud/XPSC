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
        int n, m;
        cin >> n >> m;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] == 1)
                v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[j] % (1 << v[i]) == 0)
                {
                    ar[j] += (1 << (v[i] - 1));
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    return 0;
}