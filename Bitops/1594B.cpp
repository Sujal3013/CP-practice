#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl cout << endl;
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define f(i, x, y) for (int i = x; i < y; i++)
#define eb emplace_back
const int N = 2e5, M = 20;
#define FIO                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)

void solve()
{
  // Your code here
  int n, k;
  cin >> n >> k;
  unsigned long long ans = 0;
  if (k == 1)
  {
    ans = 1;
  }
  else{
    ll p=1;
    while(k){
      if(k & 1){
        ans=(ans+p)%mod;
      }
      p=1ll*p*n%mod;
      k=k>>1;
    }
  }
  cout<<ans<<"\n";
}

int main()
{
  FIO;
  int t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }

  return 0;
}