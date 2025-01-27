#include <bits/stdc++.h>
using namespace std;
int main()
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
        vector<int> a(n), v, vv;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        v.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > v.back())
            {
                v.push_back(a[i] % 10);
                v.push_back(a[i] / 10);
            }
            else
                v.push_back(a[i]);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            vv.push_back(v[i]);
        }
        v = vv;
        sort(v.begin(), v.end());
        if (vv == v)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}