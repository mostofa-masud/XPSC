#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int turn_off_Kth_bit(int n, int k)
{
  return (~(1LL << k)) & n;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    set<int> s;
    s.insert(n);
    for (int i = 0; i < 60; i++)
    {
      if (((n >> i) & 1LL) == 1LL)
      {
        int d = turn_off_Kth_bit(n, i);
        if (d > 0)
          s.insert(d);
      }
    }

    cout << s.size() << endl;
    for (auto u : s)
      cout << u << " ";
    cout << endl;
  }
  return 0;
}
