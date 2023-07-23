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
const int N = 2e5+5, M = 20;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)

vi v[N];
ll cnt[N];

void dfs(int u, int f)
{
    int x = 0;
    cnt[u] = 0;
    for (int p : v[u])
    {
        if (p == f)
            continue;
        x++;
        dfs(p, u);
        cnt[u] += cnt[p];
    }
    if (!x)
        cnt[u] = 1;
}

void solve()
{
    // Your code here
    int n;
    cin >> n;
    f(i, 1, n + 1) { v[i].clear(); }
    f(i, 1, n)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1, -1);

        int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << cnt[x] * cnt[y] << endl;
    }
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