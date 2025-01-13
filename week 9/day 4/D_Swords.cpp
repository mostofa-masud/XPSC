#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int ar[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    int mx = *max_element(ar, ar + n);
    int gc = mx - ar[0];
    for (int i = 1; i < n; i++)
    {
        gc = gcd(gc, mx - ar[i]);
    }
    int ans = (mx * n - sum) / gc;
    cout << ans << " " << gc << endl;
    return 0;
}