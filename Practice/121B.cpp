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
    int l=1,r=n*n,t=0,row=0;
    vector<vi> ans(n,vi(n));
    f(i,0,n){
        f(j,0,n){
            if(t){
                ans[i][j]=l++;
            }
            else{
                ans[i][j]=r--;
            }
            t^=1;
        }
        if(row){
            reverse(ans[i].begin(),ans[i].end());
        }
        row^=1;
    }
    f(i,0,n){
        f(j,0,n){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}