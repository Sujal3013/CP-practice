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
    int n,flag=1;
    cin>>n;
    int arr[n],ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans[0]=arr[0];
    for(int i=1;i<n;i++){
        int x=ans[i-1]+arr[i],y=ans[i-1]-arr[i];
        if(((x<0 && y<0)||(x>=0 &&y>=0)) && x!=y){
            flag=0;
            break;
        }
        else{
            x>y?ans[i]=x:ans[i]=y;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<(-1)<<endl;
    }

}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}