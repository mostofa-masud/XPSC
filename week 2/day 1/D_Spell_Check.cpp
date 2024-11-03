#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> count;

        for (auto u : s)
        {
            count[u]++;
        }

        if (count['T'] == 1 && count['i'] == 1 && count['m'] == 1 && count['u'] == 1 && count['r'] == 1 && n == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}