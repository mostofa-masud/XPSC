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
        int ar[n];
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != 0)
                pq.push(ar[i]);
            if (ar[i] == 0 && !pq.empty())
            {
                cnt += pq.top();
                pq.pop();
            }
        }
        cout << cnt << endl;
    }
    return 0;
}