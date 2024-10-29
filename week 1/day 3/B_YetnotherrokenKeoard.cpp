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
        string s;
        cin >> s;
        vector<int> vs;
        vector<int> vc;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[i] == 'b')
                {
                    if (!vs.empty())
                        vs.pop_back();
                }
                else
                {
                    vs.push_back(i);
                }
            }
            else
            {
                if (s[i] == 'B')
                {
                    if (!vc.empty())
                        vc.pop_back();
                }
                else
                {
                    vc.push_back(i);
                }
            }
        }
        vector<int> v;
        for (int i = 0; i < vs.size(); i++)
        {
            v.push_back(vs[i]);
        }
        for (int i = 0; i < vc.size(); i++)
        {
            v.push_back(vc[i]);
        }
        sort(v.begin(), v.end());
        for (auto u : v)
        {
            cout << s[u];
        }
        cout << endl;
    }
    return 0;
}