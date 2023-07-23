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
#define f(i, x, y) for (int i = x; i < y; i++)
#define eb emplace_back
const int N = 2e5, M = 20;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

void solve()
{
    // Your code here
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int ans = a1;
    if(a1==0){
        ans=1;
    }
    else{
        ans=a1+min(a2,a3)*2+min(a1+1,abs(a2-a3)+a4);
    }
    
    cout << ans << endl;
}

int main()
{
    FIO;
    w(t)
    {
        solve();
    }

    return 0;
}