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
    string x;
    vector<bool> v(26);
    set<string> dstnct;
    cin>>x;
    f(i,0,26){
        int x;
        cin>>x;
        v[i]=x;
    }
    int count=0,tmp,k;
    cin>>k;
    if(k==0){
        cout<<0<<endl;
        return;
    }
    f(i,0,x.length()){
        tmp=0;
        string s="";
        f(j,i,x.length()){
            if(v[x[j]-'a']==0){
                tmp++;
                if(tmp<=k){
                    s+=x[j];
                    dstnct.insert(s);
                }
                else{
                    break;
                }
            }
            if(v[x[j]-'a']==1){
                s+=x[j];
                dstnct.insert(s);
            }
            
        }
    }
    cout<<dstnct.size()<<endl;
    return;
    
}
 
 
int main() {
  FIO;
  int t=1;
    while(t--){
      solve();
    }
 
    return 0;
 
}