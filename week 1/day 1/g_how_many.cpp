#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 100; k++)
            {
                if (i + j + k > s || i * j * k > t)
                    break;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}