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
        int ind = -1;
        for (int i = 1; i < n; i++)
            if (ar[i - 1] > ar[i])
            {
                ind = i;
                break;
            }
        if (ind == -1)
        {
            cout << "Yes" << endl;
            continue;
        }
        vector<int> v;
        for (int i = ind; i < n; i++)
            v.push_back(ar[i]);
        for (int i = 0; i < ind; i++)
            v.push_back(ar[i]);
        vector<int> vv = v;
        sort(vv.begin(), vv.end());
        if (v == vv)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}