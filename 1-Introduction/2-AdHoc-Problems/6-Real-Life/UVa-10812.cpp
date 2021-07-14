#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "")
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 if (sz(name))
 {
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
 }
}

int main()
{
 setIO();
 int t;
 cin >> t;
 while (t--)
 {
  long long n, m, a, b;
  cin >> n >> m;
  if (m > n)
   cout << "impossible\n";
  else
  {
   b = (n - m) / 2;
   a = m + b;
   if (a + b == n && abs(a - b) == m)
    cout << a << " " << b << "\n";
   else
    cout << "impossible\n";
  }
 }
 return 0;
}