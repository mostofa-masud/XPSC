#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, bool> count;
    while (t--)
    {
        string s;
        cin >> s;

        if (count[s] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        count[s] = 1;
    }
    return 0;
}