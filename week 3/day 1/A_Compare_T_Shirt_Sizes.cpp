#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int c = a.size();
        int d = b.size();
        if (a[c - 1] == b[d - 1] && a[c - 1] == 'S')
        {
            if (c == d)
                cout << "=" << endl;
            else if (c > d)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else if (a[c - 1] == b[d - 1])
        {
            if (c == d)
                cout << "=" << endl;
            else if (c > d)
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
        else if (a[c - 1] == 'S')
            cout << "<" << endl;
        else if (a[c - 1] == 'L')
            cout << ">" << endl;
        else
        {
            if (b[d - 1] == 'S')
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
    }
    return 0;
}