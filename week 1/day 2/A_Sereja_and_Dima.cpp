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
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    int s = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (l.front() > l.back())
            {
                s += l.front();
                l.pop_front();
            }
            else
            {
                s += l.back();
                l.pop_back();
            }
        }
        else
        {
            if (l.front() > l.back())
            {
                d += l.front();
                l.pop_front();
            }
            else
            {
                d += l.back();
                l.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}