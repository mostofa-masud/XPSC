#include <bits/stdc++.h>
//#define int long long
#define endl "\n"
using namespace std;
int check_k_th_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}
vector<int> print_binary(int a, int n)
{
    vector<int> v;
    for (int i = n-1; i >= 0; i--)
    {
        v.push_back(check_k_th_bit_on_or_off(a, i));
    }
    return v;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    m++;
    int ar[m];
    for (int i = 0; i < m; i++)
        cin >> ar[i];
    int ans = 0;
    vector<int> v = print_binary(ar[m - 1], n);
    for (int i = 0; i < m - 1; i++)
    {
        vector<int> v1 = print_binary(ar[i], n);
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] != v1[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;
    return 0;
}