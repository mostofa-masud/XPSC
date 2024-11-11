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
        string s;
        cin >> s;
        int i;
        for (i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                break;
            }
        }
        cout << n - (2 * i) << endl;
    }
    return 0;
}