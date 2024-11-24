#include <bits/stdc++.h>
using namespace std;
int main()
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
        sort(s.begin(), s.end());
        list<char> l;
        for (int i = 0; i < n; i++)
        {
            l.push_back(s[i]);
        }
        s.clear();
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s.push_back(l.front());
                l.pop_front();
            }
            else
            {
                s.push_back(l.back());
                l.pop_back();
            }
        }
        cout << s << endl;
    }
    return 0;
}