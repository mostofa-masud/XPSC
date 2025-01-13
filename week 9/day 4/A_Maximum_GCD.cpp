#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      if(n%2 == 0)
      cout<<gcd(n, n/2)<<endl;
      else cout<<gcd(n-1, n/2)<<endl;  
    }
    return 0;
}