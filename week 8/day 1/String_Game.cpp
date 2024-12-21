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
        string s;
        cin >> n >> s;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c1++;
            else
                c2++;
        }
        int d = min(c1, c2);
        if (d % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
    return 0;
}