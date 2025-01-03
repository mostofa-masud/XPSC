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
    int n = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        n += (1 << i);
        if (s[i] == '7')
            n += (1 << (s.size() - i - 1));
    }
    cout << n << endl;
    return 0;
}