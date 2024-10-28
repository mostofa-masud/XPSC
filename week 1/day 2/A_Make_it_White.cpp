#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count1 = i;
                break;
            }
        }

        reverse(s.begin(), s.end());
        int count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                count2 = i;
                break;
            }
        }

        cout << n - (count1 + count2) << endl;
    }
    return 0;
}