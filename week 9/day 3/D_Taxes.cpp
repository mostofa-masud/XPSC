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
    set<int> s;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    if (s.size() == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n % 2 == 0)
    {
        cout << 2 << endl;
        return 0;
    }
    s.clear();
    n -= 2;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }

    if (s.size() == 2)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}