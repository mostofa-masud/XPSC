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
        int cnta = 0, cntb = 0, cntc = 0, cntd = 0;
        int d = s.size();
        for (int i = 0; i < d; i++)
        {
            if (s[i] == 'A' && cnta < n)
            {
                cnta++;
            }
            else if (s[i] == 'B' && cntb < n)
            {
                cntb++;
            }
            else if (s[i] == 'C' && cntc < n)
            {
                cntc++;
            }
            else if (s[i] == 'D' && cntd < n)
            {
                cntd++;
            }
        }
        cout << cnta + cntb + cntc + cntd << endl;
    }
    return 0;
}