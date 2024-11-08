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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> v;
        int f = -1;
        for (int i = 0; i < n; i++)
        {
            if (f == -1 && s[i] == 'g')
            {
                f = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (s[i] == c)
            {
                int cnt = 0;
                while (s[i] != 'g')
                {
                    cnt++;
                    i++;
                    if (i == n)
                        break;
                }
                v.push_back(cnt);
                if (i == n && s[n-1] != 'g')
                {
                    v.push_back(cnt + f);
                }
            }
        }
       
         cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}