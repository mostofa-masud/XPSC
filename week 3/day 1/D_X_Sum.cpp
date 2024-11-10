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
        int n, m;
        cin >> n >> m;
        int ar[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }
        int ans = 0;
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < m; b++)
            {
                int cnt = ar[a][b];

                int i = a + 1, j = b + 1;
                while (true)
                {
                    if (i < n && j < m)
                    {
                        cnt += ar[i][j];
                    }
                    else
                        break;
                    i++;
                    j++;
                }
                i = a - 1, j = b - 1;
                while (true)
                {
                    if (i >= 0 && j >= 0)
                    {
                        cnt += ar[i][j];
                    }
                    else
                        break;
                    i--;
                    j--;
                }
                i = a - 1, j = b + 1;
                while (true)
                {
                    if (i < 0)
                        break;
                    else if (i >= n)
                        break;
                    else if (j < 0)
                        break;
                    else if (j >= m)
                        break;
                    else
                        cnt += ar[i][j];
                    i--;
                    j++;
                }
                i = a + 1, j = b - 1;
                while (true)
                {
                    if (i < 0)
                        break;
                    else if (i >= n)
                        break;
                    else if (j < 0)
                        break;
                    else if (j >= m)
                        break;
                    else
                        cnt += ar[i][j];
                    i++;
                    j--;
                }

                ans = max(ans, cnt);
            }
        }
        cout << ans << endl;
    }
    return 0;
}