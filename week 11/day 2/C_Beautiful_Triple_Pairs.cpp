#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        map<pair<int, pair<int, int>>, int> m;
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            cnt += m[{ar[i], {ar[i + 1], 0}}];
            cnt += m[{ar[i], {0, ar[i + 2]}}];
            cnt += m[{0, {ar[i + 1], ar[i + 2]}}];
            cnt -= 3 * m[{ar[i], {ar[i + 1], ar[i + 2]}}];

            m[{ar[i], {ar[i + 1], 0}}]++;
            m[{ar[i], {0, ar[i + 2]}}]++;
            m[{0, {ar[i + 1], ar[i + 2]}}]++;
            m[{ar[i], {ar[i + 1], ar[i + 2]}}]++;
        }
        cout << cnt << endl;
    }
    return 0;
}