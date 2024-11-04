#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    int ans[n+1];
    set<int> s;
    for(int i = n; i> 0; i--)
    {
        s.insert(ar[i]);
        ans[i] = s.size();
    }
    while(m--)
    {
        int q;
        cin>>q;
        cout<<ans[q]<<endl;
    }
    return 0;
}