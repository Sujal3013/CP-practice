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
    string s;
    cin>>s;
    int n=(int)s.size(),l=0,count=0;
    vi dp(n,0);
    stack<int> st;
    for(int i=0;i<n;i++){
      char c=s[i];
      if(c=='('){
        st.push(i);
        continue;
      }
      if(st.empty())continue;
      int j=st.top();
      st.pop();
      dp[i]=i-j+1+((j>0)?dp[j-1]:0);
      if(dp[i]>l){
        l=dp[i];
        count=1;
      }
      else if(dp[i]==l){
        count++;
      }
    }
    if(l==0){
      cout<<"0 1"<<endl;
    }
    else{
      cout<<l<<" "<<count<<endl;
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