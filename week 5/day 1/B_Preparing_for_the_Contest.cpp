#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int d = n;

        for (int i = 0; i < n; i++)
        {
            if (i < k)
                cout << i + 1 << " ";
            else
            {
                cout << d << " ";
                d--;
            }
        }
        cout << endl;
    }
    return 0;
}