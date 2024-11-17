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
        int flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[0])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt0 = 0, cnt1 = 0;
            int i = 0;
            while (i < n)
            {
                if (s[i] == '0')
                {
                    cnt0++;
                    while (s[i] == '0')
                    {

                        i++;
                        if (i == n)
                            break;
                    }
                }
                if (s[i] == '1')
                {
                    cnt1++;
                    while (s[i] == '1')
                    {
                        i++;
                        if (i == n)
                            break;
                    }
                }
            }
            cout << min(cnt0, cnt1) << endl;
        }
    }
    return 0;
}