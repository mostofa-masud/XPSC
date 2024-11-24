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
        vector<int> v;
        int i;
        for (i = 1; i <= (n * n) / 2; i++)
        {
            v.push_back(i);
            v.push_back((n * n) - i + 1);
        }
        if (n % 2 != 0)
            v.push_back(i);
        vector<int> ar[n];
        int j = 0;
        for (i = 0; i < n; i++)
        {
            int cnt = 0;
            while (cnt < n)
            {
                ar[i].push_back(v[j]);
                j++;
                cnt++;
            }
            if (i % 2 == 1)
            {
                reverse(ar[i].begin(), ar[i].end());
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (auto u : ar[i])
            {
                cout << u << " ";
            }
            cout << endl;
        }
    }
    return 0;
}