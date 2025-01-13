#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (a % (a * b) == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        bool flag = false;
        for (int i = 1; i < 100000; i++)
        {
            if (((i * a * b) - a) % (a * b) != 0 && ((i * a * b) - a) % (a) == 0 && a != ((i * a * b) - a))
            {
                cout << a << " " << (i * a * b) - a << " " << i * a * b << endl;
                break;
            }
        }
    }
    return 0;
}