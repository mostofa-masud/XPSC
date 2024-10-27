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
    int ar[n];
    vector<int> ev;
    vector<int> od;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            ev.push_back(x);
        else
            od.push_back(x);
    }
    int cnt = 0;
    for (auto u : ev)
        cnt += u;
    sort(od.begin(), od.end(), greater<int>());
    for (auto u : od)
        cnt += u;
    int ans;
    if (cnt % 2 == 0)
        ans = cnt;
    else
        ans = cnt - od.back();
    cout << ans << endl;

    return 0;
}