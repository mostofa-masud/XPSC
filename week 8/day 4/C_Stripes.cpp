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
        char ar[8][8];
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> ar[i][j];
        bool flag = false;
        for (int i = 0; i < 8; i++)
        {
            int cnt = 0;
            for (int j = 0; j < 8; j++)
            {
                if (ar[i][j] == 'R')
                    cnt++;
            }
            if (cnt == 8)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}