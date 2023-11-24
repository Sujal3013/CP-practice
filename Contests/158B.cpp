#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef priority_queue<int, vector<int>, greater<int>> min_heap32;
typedef priority_queue<ll, vector<ll>, greater<ll>> min_heap64;
typedef priority_queue<int> max_heap32;
typedef priority_queue<ll> max_heap64;
typedef unordered_map<int, int> umap32;
typedef unordered_map<ll, ll> umap64;

#define MOD1 998244353
#define MOD 1000000007
#define PI 3.141592653589793238462
#define INF 1e18
#define endl cout << endl;
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define f(i, x, y) for (int i = x; i < y; i++)
#define eb emplace_back
#define ff first
#define ss second
#define set_bits __builtin_popcount
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#ifndef ONLINE_JUDGE
#define debug(x)     \
    cerr << #x <<''; \
    _print(x);       \
    cerr << endl;
#else
#define debug(x)
#endif
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(multimap<T, V> v);
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll expo(ll a, ll b, ll mod)
{
    ll r = 1;
    while (b)
    {
        if (b & 1)
            r = (r * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return r;
} // iterative(binary bits b are only multiplied)

int isPrime(int N)
{
    if (N < 2 || (!(N & 1) && N != 2))
        return 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!(N % i))
            return 0;
    }
    return 1;
}

vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        factors.push_back(n);
    return factors;
}
vector<ll> allFactors(ll n) /*unsorted*/
{
    vector<ll> factors;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (n / i != i)
                factors.push_back(n / i);
        }
    }
    return factors;
}

void printBinary(int num)
{
    for (int i = 25; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    endl;
}
int teleport(vi &v,int n){
    
}

void solve()
{
    // your code here
    int n,sum=0;
    vi v;
    cin >> n;
    f(i, 0, n)
    {
        int x;
        cin >> x;
        sum+=x;
        v.push_back(x);
    }
    int max_sequence = 1, idx = 0;
    while(sum>0){
        for(int i=idx;i<n;i++){
            if(v[idx]==0){idx=teleport(v,n);
            continue;}
            v[idx]--;
            sum--;
        }
    }
    
}

signed main()
{
    FIO;
    w(t)
    {
        solve();
    }

    return 0;
}