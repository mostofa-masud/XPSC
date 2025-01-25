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
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    map<int, int> m;
    int rem = 0, cnt = 0;
    m[rem] = 1;
    for (int i = 0; i < n; i++)
    {
        rem = ((rem + ar[i]) % n + n) % n;
        cnt += m[rem];
        m[rem]++;
    }
    cout << cnt << endl;
    return 0;
}