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
#define pl "  "
#define pll " --- "
#define size size()
#define mpr make_pair
#define vec vector<ll>
#define lmax LONG_LONG_MAX
#define lmin LONG_LONG_MIN
#define forr(i, a, b) for (ll i = a; i < b; i++)
#define forrev(i, a, b) for (ll i = a; i >= b; i--)

// #define v.all v.begin(),v.end()
#define printarr(arr, in, n)                                                   \
  cout << ed;                                                                  \
  for (ll i = in; i < n; i++)                                                  \
    cout << arr[i] << " ";                                                     \
  cout << ed;
#define print(arr, n)                                                          \
  cout << ed;                                                                  \
  for (ll i = 0; i < n; i++)                                                   \
    cout << arr[i] << " ";                                                     \
  cout << ed;
#define printyn(flag)                                                          \
  if (flag == 0)                                                               \
    cout << "NO\n";                                                            \
  else                                                                         \
    cout << "YES\n";

#define printvc(vc)                                                            \
  cout << ed;                                                                  \
  for (auto x : vc)                                                            \
    cout << x << " ";                                                          \
  cout << ed;
// #define printvc(vc)  for(auto x:vc)cout<<x<<".";
// #define printvc(vc,in,n)  cout<<ed;for(ll i=in;i<n;i++)cout<<arr[i]<<"
// ";cout<<ed;

#define srt(arr, n) sort(ara, ara + n);
#define srtvc(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
// #define find(v,x) find(v.begin(), v.end(),x);

// const ll N = 1e12+1;
const ll mod = 1e9 + 7;
const int N = 2e5 + 7;
ll logN = 18;
ll dp[N][18];

ll query(ll a, ll b) {
  ll len = b - a + 1;
  ll j = log2(len);

  return min(dp[a][j], dp[b - (1 << j) + 1][j]);
}

int main() {
  fast
      // init
      // {
      // count++;
      ll a,
      b, c, i, j, k, x, y, z, p, q, m, n, l, r, l1, l2, r1, r2, ans, flag, sum;
  // ll mini = LONG_LONG_MAX, maxi = -1, piv , piv1 , piv2 , rem , now , mid;
  // ll  dif = 0, change = 0, total = 0, same = 0, plus = 0, minus = 0, zero =
  // 0; string s, s1 = "", s2 = "";
  // string res1 = "", res2 = "", chk1 = "", chk2 = "", chk3 = "", chk4 = "",
  // pivs = "", rems = "";

  cin >> n >> q;
  logN = log2(n);
  // n = s.size;
  //  map<ll,ll> v;
  //  vec v(n+1);

  // ll arr[n],v[n+1],v1[n+1];
  // number[n], cost[n], forsum[n], backsum[n];
  // vector<ll> v(n+1);//, v1(n+1), v2;
  // vector<ll> vans, vpos, vlen, vsum, vdif;
  // vector<pair<ll, ll>> vpr;
  // vector<vec> vdarr(n, vec(10, 0));
  // pair<ll, ll> pr, pr1, pr2;
  // set<ll> st, st1, st2, ms, ldiff, rdiff;
  // priority_queue<ll> pq, pq1, pq2;
  // stack<ll> stck, stck1, stck2;
  // map<int, ll> mp, mp1, mp2;
  // queue<ll> vq[10],vq1,vq2;

  // Point pa,pb,pt[n];
  // Node pa,pb,pt[n];
  // cout<<"-----------------yess"<<endl;

  ans = 0;
  // piv=0;
  flag = 0;
  sum = 0;

  // cout<<LONG_MAX<<endl;
  //  cout<<(n|(n>>1))<<endl;
  //  return 0;
  // v1[0]=1<<32;

  forr(i, 0, n) {
    ll x;
    cin >> x;
    dp[i][0] = x;
  }

  forr(j, 1, logN + 1) {
    for (i = 0; i + (1 << j) - 1 < n; i++) {
      dp[i][j] = min(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
    }
  }

  forr(i, 0, q) {
    cin >> a >> b;
    cout << query(a - 1, b - 1) << ed;
  }

  //         forr(j,0,logN+1)
  //         {
  //             for(i=0;i+(1<<j)-1<n;i++)
  //             {
  // //                cout<<pll<<endl;
  //                 cout<<dp[i][j]<<pl;//=min(dp[i][j-1],dp[i+1<<(j-1)][j-1]);
  //             }
  //             cout<<ed;
  //         }
}