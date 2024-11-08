#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        string c;
        cin >> c;
        sort(v.begin(), v.end());
        sort(c.begin(), c.end());
        list<char> l;
        for (int i = 0; i < m; i++)
        {
            l.push_back(c[i]);
        }
        for (int i = 0; i < m - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                c[i] = l.back();
                l.pop_back();
            }
            else
            {
                c[i] = l.front();
                l.pop_front();
            }
        }
        c[m - 1] = l.front();

        for (int i = 0; i < m; i++)
        {
            s[v[i]-1] = c[i];
        }
        cout << s << endl;
    }
    return 0;
}