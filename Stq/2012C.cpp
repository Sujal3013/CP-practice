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
    deque<string> st;
    while(n--){
        string sb;
        cin>>sb;
        if(sb=="cd"){
            string s;
            cin>>s;
            s+='/';
            if(s[0]=='/'){
                //Go to root directory
                while(!st.empty()){
                    st.pop_back();
                }
                string tmp="";
                for(int i=1;i<s.length();i++){
                    if(s[i]!='/'){
                        tmp+=s[i];
                    }else{
                        if(tmp==".."){
                            if(st.size()!=0){st.pop_back();}
                            
                        }
                        else{
                            st.push_back(tmp);
                            
                        }
                        tmp="";
                        
                    }
                }
                tmp="";
            }
            else{
                string tmp="";
                for(int i=0;i<s.length();i++){
                    if(s[i]!='/'){
                        tmp+=s[i];
                    }else{
                        if(tmp==".."){
                            if(st.size()!=0){st.pop_back();}
                            
                        }
                        else{
                            st.push_back(tmp);
                            
                        }
                        tmp="";
                    }
                    

                }
                tmp="";
            }
        }else{
            string x="/";
            int y=st.size();
            while(y--){
                x+=st.front()+"/";
                st.push_back(st.front());
                st.pop_front();
            }
            cout<<x<<endl;
        }
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