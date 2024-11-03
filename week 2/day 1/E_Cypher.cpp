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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'U')
                {
                    ar[i]--;
                }
                else
                    ar[i]++;
                if (ar[i] == 10)
                    ar[i] = 0;
                if (ar[i] == -1)
                    ar[i] = 9;
            }
        }
        for (int i = 0; i < n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    return 0;
}