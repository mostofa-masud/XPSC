#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    if (s.size() < k)
        cout << -1 << endl;
    else
    {
        int cnt = 1;
        for (auto u : s)
        {
            if (cnt == k)
                cout << u << endl;
            cnt++;
        }
    }
    return 0;
}