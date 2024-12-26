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
        string s;
        cin >> s;
        int n = s.size();
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c1++;
            else
                c2++;
        }
        if (c1 == c2)
        {
            cout << 0 << endl;
            continue;
        }

        int i;
        for (i = 0; i < n; i++)
        {
            if (c1 < 0 || c2 < 0)
                break;
            if (s[i] == '0')
                c2--;
            else
                c1--;
        }
        cout << n - i + 1 << endl;
    }
    return 0;
}