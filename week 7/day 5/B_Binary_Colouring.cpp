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
        int x;
        cin >> x;
        vector<int> v;
        if (x == 0)
        {
            v.push_back(0);
        }
        else
        {
            while (x > 0)
            {
                v.push_back(x % 2);
                x /= 2;
            }
        }
        int n = v.size();

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i != n-1 && v[i] == 1 && v[i + 1] == 1 && !flag)
            {
                flag = true;
                v[i] = -1;
            }
            else if (v[i] == 1 && flag && i == n - 1)
            {
                v[i] = 0;
                v.push_back(1);
            }
            else if (v[i] == 1 && v[i + 1] == 0 && flag)
            {
                flag = false;
                v[i] = 0;
                v[i + 1] = 1;
            }
            else if (v[i] == 1 && flag)
                v[i] = 0;
        }
        cout << v.size() << endl;
        for (auto u : v)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}