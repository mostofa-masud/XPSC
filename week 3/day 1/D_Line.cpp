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
        string s;
        cin >> s;
        pair<int, int> ar[n];
        int x = n - 1;
        for (int i = 0; i < n; i++)
        {
            ar[i].first = i;
            ar[i].second = x - i;
        }

        priority_queue<int> pq;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                if (ar[i].second - ar[i].first > 0)
                    pq.push(ar[i].second - ar[i].first);
                ans += ar[i].first;
            }
            else
            {
                if (ar[i].first - ar[i].second > 0)
                    pq.push(ar[i].first - ar[i].second);
                ans += ar[i].second;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}