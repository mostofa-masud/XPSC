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
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        vector<int> v;
        v.push_back(ar[n - 3] - ar[0]);
        v.push_back(ar[n - 2] - ar[1]);
        v.push_back(ar[n - 1] - ar[2]);
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
}