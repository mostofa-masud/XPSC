#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0;i< s.size(); i++)
    {
        if(s[i] != t[i])
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}