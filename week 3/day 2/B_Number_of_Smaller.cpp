#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ar[n], br[m];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < m; i++)
        cin >> br[i];
    int x = 0;
    for (int i = 0; i < m; i++)
    {
        while (ar[x] < br[i])
        {
            if (x == n)
                break;
            x++;
        }
        cout << x << " ";
    }
    cout << endl;
    return 0;
}