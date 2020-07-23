#include <bits/stdc++.h>
#define ENDL '\n'
#define deb(u) cout << #u " : " << (u) << ENDL;
#define deba(alias, u) cout << alias << ": " << (u) << ENDL;
#define debp(u, v) cout << u << " : " << v << ENDL;
#define pb push_back
#define F first
#define S second
#define lli long long
#define pii pair<int, int>
#define pll pair<lli, lli>
#define ALL(a) (a).begin(), (a).end()
#define ALLR(a) (a).rbegin(), (a).rend()
#define FOR(i, a, n) for (int i = (a); i < (n); ++i)
#define FORN(i, a, n) for (int i = (a - 1); i >= n; --i)
#define IO                          \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)
using namespace std;

int main()
{
  IO;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n)
    {
      cin >> v[i];
    }
    if (n % 2)
      cout << -1 << ENDL;
    else
    {
      map<int, int> m;
      for (auto i : v)
      {
        for (auto j : v)
        {
          // deb(i ^ j);
          m[i ^ j]++;
        }
      }
      bool ok = false;
      for (auto e : m)
      {
        if (e.F > 0 && e.S == n)
        {
          cout << e.F << ENDL;
          ok = true;
          break;
        }
      }
      if (!ok)
        cout << -1 << ENDL;
    }
  }
  return 0;
}