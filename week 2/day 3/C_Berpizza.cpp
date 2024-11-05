#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<pair<int, int>> pq;
    queue<pair<int, int>> q;
    unordered_map<int, int> mp;
    int cnt = 1;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int d;
            cin >> d;
            pq.push({d, -cnt});
            q.push({d, -cnt});
            cnt++;
        }
        else if (n == 2)
        {
            while (mp[q.front().second] == 1)
            {
                q.pop();
            }
            cout << -q.front().second << " ";
            mp[q.front().second] = 1;
            q.pop();
        }
        else
        {
            while (mp[pq.top().second] == 1)
            {
                pq.pop();
            }
            cout << -pq.top().second << " ";
            mp[pq.top().second] = 1;
            pq.pop();
        }
    }
    return 0;
}