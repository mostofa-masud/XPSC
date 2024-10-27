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
    while (s.size() < 4)
    {
        s = '0' + s;
    }
    cout << s << endl;

    return 0;
}