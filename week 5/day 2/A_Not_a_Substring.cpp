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
        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {

            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "()";
            }
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << "(";
            for (int i = 0; i < n; i++)
                cout << ")";
            cout << endl;
        }
    }
    return 0;
}