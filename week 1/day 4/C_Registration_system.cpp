#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, long long> count;
    while (n--)
    {
        string s;
        cin >> s;
        if (count[s] == 0)
        {
            cout << "OK" << endl;
            count[s]++;
        }
        else
        {
            cout << s << count[s] << endl;
            count[s]++;
        }
    }

    return 0;
}