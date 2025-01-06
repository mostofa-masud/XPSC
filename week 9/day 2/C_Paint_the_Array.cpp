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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int gcd1 = ar[0], gcd2 = ar[1];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                gcd1 = gcd(gcd1, ar[i]);
            else
                gcd2 = gcd(gcd2, ar[i]);
        }
        vector<int> v1, v2;
        for (int i = 1; i * i <= gcd1; i++)
        {
            if (gcd1 % i == 0)
            {
                v1.push_back(i);
                v1.push_back(gcd1 / i);
            }
        }
        for (int i = 1; i * i <= gcd2; i++)
        {
            if (gcd2 % i == 0)
            {
                v2.push_back(i);
                v2.push_back(gcd2 / i);
            }
        }
        bool flag = true;
        int d = 0;
        for (auto u : v1)
        {
            for (int i = 1; i < n; i += 2)
            {
                if (ar[i] % u == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                d = u;
                break;
            }
        }
        if (flag)
        {
            cout << d << endl;
            continue;
        }
        for (auto u : v2)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (ar[i] % u == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                d = u;
                break;
            }
        }
        cout << d << endl;
    }
    return 0;
}