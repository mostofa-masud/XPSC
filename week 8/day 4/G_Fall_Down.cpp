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
        char ar[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> ar[i][j];
        }
        char v[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (ar[i][j] == 'o')
                    v[i][j] = 'o';
                else
                    v[i][j] = '.';

        for (int i = 0; i < m; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (ar[j][i] == '*')
                    cnt++;
                if (ar[j][i] == 'o')
                {
                    int k = j - 1;
                    while (cnt--)
                    {
                        v[k][i] = '*';
                        k--;
                    }
                    cnt = 0;
                }
                if (j == n - 1)
                {
                    int k = j;
                    while (cnt--)
                    {
                        v[k][i] = '*';
                        k--;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}