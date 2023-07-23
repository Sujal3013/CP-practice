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
    int n,q,lastq=0,t=0;
    cin>>n>>q;
    ll sum=0;
    vi v(n+1),last(n+1,0);
    f(i,1,n+1){
        cin>>v[i];
        sum+=v[i];
    }
    
    f(i,1,q+1){
        int op;
        cin>>op;
        if(op==1){
            int x,y;
            cin>>x>>y;
            if(last[x]>=lastq)sum+=y-v[x];
            else{ sum+=y-t;}
            v[x]=y;
            last[x]=i;
        }
        else{
            int x;
            cin>>x;
            sum=x*n;
            t=x;
            lastq=i;
        }
        cout<<sum<<endl;
    }
    

}
 
 
int main() {
  FIO;
  int t=1;
    while(t--){
      solve();
    }
 
    return 0;
 
}