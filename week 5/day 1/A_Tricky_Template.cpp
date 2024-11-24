#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;
 
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}