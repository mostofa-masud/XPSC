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
    pair<int, int> a;
    a.first = 1, a.second = n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i < max(a.first, a.second) && lcm(i, n / i) == n)
            {
                a.first = i;
                a.second = n / i;
            }
        }
    }
    cout << a.first << " " << a.second << endl;
    return 0;
}