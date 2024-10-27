#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int ar[26];
    memset(ar, 0, sizeof(ar));
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        ar[s[i] - 'a'] = 1;
    }
    int x = -1;
    for (int i = 0; i < 26; i++)
    {
        if (ar[i] == 0)
        {
            x = i;
            break;
        }
    }
    if (x == -1)
        cout << "None" << endl;
    else
        cout << char('a' + x) << endl;
    return 0;
}