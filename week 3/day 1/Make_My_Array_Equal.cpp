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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int x = v.front();
        int y = v.back();
        bool flag = true;
        if (n > 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == x || v[i] == y)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            if (x == y)
                flag = true;
            else if (x == 0)
                flag = true;
            else
                flag = false;
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}