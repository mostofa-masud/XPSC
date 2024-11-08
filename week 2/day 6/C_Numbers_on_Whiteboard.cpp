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
        cout << 2 << endl;
        int k = n;
        n -= 2;
        cout << k << " " << k - 1 << endl;
        int d = k + k - 1;
        k -= 2;
        while (n--)
        {
            if (d % 2 == 0)
            {
                d /= 2;
                cout << d << " " << k << endl;
                d = d + k;
            }
            else
            {
                d /= 2;
                d++;
                cout << d << " " << k << endl;
                d = d + k;
            }
            k--;
        }
    }
    return 0;
}