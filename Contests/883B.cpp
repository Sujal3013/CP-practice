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
    string a1,a2,a3;
    string ans="DRAW";
    map<char,int> m;
    m['X']=m['O']=m['+']=0;
    cin>>a1>>a2>>a3;
    f(i,0,3){
        if(a1[i]==a2[i] && a1[i]==a3[i] && a1[i]!='.'){
            m[a1[i]]++;
        }
    }
    if(a1[0]==a1[1]&&a1[0]==a1[2] && a1[2]!='.'){
        m[a1[0]]++;
    }
    if(a2[0]==a2[1]&&a2[0]==a2[2] && a2[2]!='.'){
        m[a2[0]]++;
    }
    if(a1[0]==a2[1]&&a2[1]==a3[2] && a3[2]!='.'){
        m[a1[0]]++;
    }
    if(a3[0]==a2[1]&&a3[0]==a1[2] && a1[2]!='.'){
        m[a3[0]]++;
    }
    if(a3[0]==a3[1]&&a3[0]==a3[2] && a3[2]!='.'){
        m[a3[0]]++;
    }
    int wins=0;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second>=1){
            wins+=1;
            ans=it->first;
        }
    }
    if(wins==1){
        cout<<ans<<endl;
    }
    else{
        cout<<"DRAW"<<endl;
    }

}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}