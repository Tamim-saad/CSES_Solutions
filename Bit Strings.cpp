/// say Alhamdulillah

#include <bits/stdc++.h>
using namespace std;

#define fast                                                                   \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define ll long long
#define init                                                                   \
  ll count = 0, zz, t;                                                         \
  cin >> t;                                                                    \
  while (t--)
#define ld long double
#define ed "\n"
#define eb emplace_back
#define con continue
#define bre break
#define pl " "
#define pll " --- "
#define size size()
#define mpr make_pair
#define vec vector<ll>
#define lmax LONG_LONG_MAX
#define lmin LONG_LONG_MIN
#define forr(i, a, b) for (ll i = a; i < b; i++)
#define forrev(i, a, b) for (ll i = a; i >= b; i--)

// #define v.all v.begin(), v.end()

#define printArrWhole(arr, n) for (ll i = 0; i < n; i++)

#define printArrLim(arr, in, n)                                                \
  for (ll i = in; i <= n; i++)                                                 \
    cout << arr[i] << " ";

#define printYesNo(flag)                                                       \
  if (flag == 0)                                                               \
    cout << "NO\n";                                                            \
  else                                                                         \
    cout << "YES\n";

#define printvcWhole(vc)                                                       \
  for (auto x : vc)                                                            \
    cout << x << " ";

#define printvcLim(vc, in, n)                                                  \
  for (ll i = in; i <= n; i++)                                                 \
    cout << vc[i] << " ";

#define sortArr(arr, n) sort(arr, arr + n);
#define sortvc(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define find(v, x) find(v.begin(), v.end(), x);

const ll mod = 1e9 + 7;

int main() {
  fast
  // init
  {
    // count++;
    ll i, j, k, x, y, z, p, q, m, n, l, r, l1, l2, r1, r2, ans, flag, sum;
    ll mini = lmax, maxi = -1, piv, piv1, piv2, rem, now, mid;

    cin >> n;

    // cout<<"-----------------yess"<<endl;

    ans = 1;
    // piv=0;
    // flag=0;
    // sum=1;

    forr(i, 1, n + 1) { ans = ((ans % mod) * 2) % mod; }

    cout << ans << ed;
  }
}