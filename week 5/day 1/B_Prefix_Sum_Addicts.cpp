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
        int n, k;
        cin >> n >> k;
        int ar[k];
        for (int i = 0; i < k; i++)
            cin >> ar[i];
        if (k == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        vector<int> v;
        for (int i = k - 1; i > 0; i--)
            v.push_back(ar[i] - ar[i - 1]);
        bool flag = true;
        if (n == k)
        {
            v.push_back(ar[0]);
            reverse(v.begin(), v.end());
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            int d = n - k;
            int cnt = ar[0];
            while (d--)
            {
                v.push_back(v.back());
                cnt -= v.back();
            }
            v.push_back(cnt);
            reverse(v.begin(), v.end());
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}