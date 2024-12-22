#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0 || i % 4 == 1)
            cout << 'a';
        else
            cout << 'b';
    }
    cout << endl;
    return 0;
}