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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                f = true;
                break;
            }
        }
        if (!f && n == k)
        {
            cout << 1 << endl;
            continue;
        }
        int l = 0;
        int cnt = 0;
        while (l < n)
        {
            if (s[l] == '1')
            {
                l += (k + 1);
            }

            if (l < n && s[l] == '0')
            {
                bool flag = true;
                for (int i = 0; i < k; i++)
                {
                    l++;
                    if (l == n)
                    {
                        //flag = false;
                        break;
                    }

                    if (s[l] == '1')
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cnt++;
                    l++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}