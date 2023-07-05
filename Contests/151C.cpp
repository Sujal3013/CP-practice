#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
#define endl cout<<endl;
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

bool check_String(string s,string l,string r){

}

void solve(){
    //Your code here
    string s,l,r;
    int m;
    cin>>s>>m>>l>>r;
    vector<vector<int>> v(10);
    vector<int> tmp(1,-1);
    for(int i=0;i<10;i++){
        
        v[i]=tmp;
    }
    for(int i=0;i<s.length();i++){
        int x=s[i]-'0';
        if(v[x]==tmp){
            vector<int> y(1,i);
            v[x]=y;
        }
        else{
            v[x].push_back(i);
        }
    }
    
    


}
 
 
int main() {
  FIO;
    w(t){
      solve();
    }
 
    return 0;
 
}