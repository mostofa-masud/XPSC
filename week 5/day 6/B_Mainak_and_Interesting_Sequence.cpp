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
        int n, m;
        cin >> n >> m;
        if (n > m)
        {
            cout << "No" << endl;
            continue;
        }
        else if (n % 2 == 0 && m % 2 == 1)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            cout << "Yes" << endl;
            if (n == 1)
                cout << m << endl;
            else if (n == 2)
                cout << m / 2 << " " << m / 2 << endl;
            else
            {
                if (n % 2 == 0)
                {
                    for (int i = 0; i < n - 2; i++)
                        cout << 1 << " ";
                    cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
                }
                else
                {
                    for (int i = 0; i < n - 1; i++)
                        cout << 1 << " ";
                    cout << m - n + 1 << endl;
                }
            }
        }
    }
    return 0;
}