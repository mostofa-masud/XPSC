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
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                    cout << "AA";
                else
                    cout << "BB";
            }
            cout << endl;
        }
    }
    return 0;
}