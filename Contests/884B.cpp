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
    int n;
    cin>>n;
    if(n<=2){
        f(i,1,n+1){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    vi v(n,0);
    v[n/2]=1,v[0]=2,v[n-1]=3;
    int x=4;
    f(i,1,n-1){
        if(x>n){
            break;
        }
        if(v[i]==1){
            continue;
        }
        v[i]=x++;
    }
    f(i,0,n){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}