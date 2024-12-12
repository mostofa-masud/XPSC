#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
 
        long long mx = 0, sum = 0, cnt = 0;
        for (long long i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
            sum += v[i];
            if (mx == sum - mx)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}