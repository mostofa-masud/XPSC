#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    int ans = 0;
    for (auto u : m)
    {
        if (u.second > ans)
            ans = u.second;
    }
    cout << ans << endl;
    return 0;
}