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
        int fp = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'p')
            {
                fp = i;
                break;
            }
        }
        int ls = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 's')
            {
                ls = i;
                break;
            }
        }
        if (fp == -1 || ls == -1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (fp < ls)
        {
            cout << "NO" << endl;
            continue;
        }
        int pc = 0, sc = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'p')
                pc++;
            if (s[i] == 's')
                sc++;
        }
        if (pc > 1 && sc > 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sc == 1 && pc > 1 && s[0] == '.')
        {
            cout << "NO" << endl;
            continue;
        }
        if (pc == 1 && sc > 1 && s[n - 1] == '.')
        {
            cout << "NO" << endl;
            continue;
        }
        if (pc > 0 && sc > 0 && s[0] == '.' && s[n - 1] == '.')
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}