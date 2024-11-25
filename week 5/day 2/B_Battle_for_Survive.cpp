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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end() - 2);
        long long d = v[n - 2];
        for (long long i = n - 3; i >= 0; i--)
        {
            d = d - v[i];
        }
        cout << v[n - 1] - d << endl;
    }
    return 0;
}