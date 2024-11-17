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
        int i = n - 1;
        string t = "";
        while (i > -1)
        {
            if (s[i] == '0')
            {
                char a = s[i - 2], b = s[i - 1];
                int x = (a - '0') * 10;
                int y = b - '0';
                int d = x + y;
                t.push_back(char(d - 1 + 'a'));
                i -= 3;
            }
            else
            {
                t.push_back(char((s[i] - '0') - 1 + 'a'));
                i--;
            }
        }
        for (int i = t.size() - 1; i >= 0; i--)
            cout << t[i];
        cout << endl;
    }
    return 0;
}