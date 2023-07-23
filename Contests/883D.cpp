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
    int n,d,h;
    cin>>n>>d>>h;
    cout<<fixed<<setprecision(10);
    long double area=(long double)d*h/2.0;
    vector<int> v(n);
    f(i,0,n){
        cin>>v[i];
    }
    for(int i=0;i+1<n;i++){
      if(v[i+1]>=v[i]+h)area+=(long double)d*h/2.0;
      else{
        long double d2=(long double)d*(v[i]+h-v[i+1])/h;
        long double nh=v[i+1]-v[i];
        area+=(d+d2)/2.0*nh;
      }
    }
    cout<<area;
    cout<<endl;


}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}