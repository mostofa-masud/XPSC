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
        vector<int> v, ans;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int d = cnt;
            if (v.size() > 0 && v.back() > ar[i])
                d++;
            if (d == 0 || (d == 1 && ar[i] <= v[0]))
            {
                v.push_back(ar[i]);
                ans.push_back(1);
                cnt = d;
            }
            else
            {
                ans.push_back(0);
            }
        }

        for (auto u : ans)
            cout << u;
        cout << endl;
    }
    return 0;
}