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
        string s, t;
        cin >> s >> t;
        int ind = INT_MAX, ind2 = INT_MAX;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
            {
                ind = i;
                break;
            }
        for (int i = 0; i < n; i++)
            if (t[i] == '1')
            {
                ind2 = i;
                break;
            }
        if (ind > ind2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}