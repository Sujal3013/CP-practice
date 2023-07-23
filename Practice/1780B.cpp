#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define f(i,x,y) for(int i=x;i<y;i++)
#define eb emplace_back
const int N = 2e5, M = 20;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937     rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x)            int x; cin>>x; while(x--)
 
void solve(){
    //Your code here
    ll n,sum_i=0,max_i=1;
    cin>>n;
    vi a(n);
    f(i,0,n){
        cin>>a[i];
    }
    ll sum=accumulate(a.begin(),a.end(),0ll);
    f(i,0,n-1){
        sum_i+=a[i];
        sum-=a[i];
        ll tmp=__gcd(sum_i,sum);
        max_i=max(max_i,tmp);
    }
    cout<<max_i<<endl;
    

}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}