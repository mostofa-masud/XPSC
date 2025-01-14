#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    m[0] = 1;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        sum += d;
        cnt += m[sum - x];
        m[sum]++;
    }
    cout << cnt << endl;
    return 0;
}