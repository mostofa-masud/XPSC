#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt = i;
                break;
            }
        }
        if (cnt != -1)
        {
            for (int i = 0; i <= cnt; i++)
            {
                cout << s[i];
            }
            if (s[cnt] != 'z')
                cout << char(s[cnt] + 1);
            else
                cout << char(s[cnt] - 1);
            for (int i = cnt + 1; i < n; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            if (s[0] != 'z')
            {
                cout << char(s[0] + 1);
                cout << s;
            }
            else
            {
                cout << "a";
                cout << s;
            }
        }
        cout << endl;
    }
    return 0;
}