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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    multiset<int> s;
    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        s.insert(ar[r]);

        while (*(--s.end()) - *s.begin() > k)
        {
            s.erase(s.find(ar[l]));
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
    return 0;
}