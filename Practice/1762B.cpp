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

ll func(ll x){
    ll cur=1;
    while(cur<=x){
        cur*=2;
    }
    return cur;
}

void solve(){
    //Your code here
    int n,count=0,mini=INT_MAX;
    cin>>n;
    cout<<n<<endl;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        cout<<i<<" "<<func(x)-x<<endl;
    }
    
    



}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}