#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ar[n];
        vector<long long> even, odd;
        for (long long i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
            {
                even.push_back(ar[i]);
            }
            else
                odd.push_back(ar[i]);
        }
        if (even.empty() || odd.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            bool flag = true;
            sort(even.begin(), even.end());
            long long mx_odd = *max_element(odd.begin(), odd.end());
            for (int i = 0; i < even.size(); i++)
            {
                if (mx_odd > even[i])
                {
                    mx_odd += even[i];
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << even.size() << endl;
            else
                cout << even.size() + 1 << endl;
        }
    }
    return 0;
}