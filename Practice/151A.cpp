#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl cout << endl;
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
ll n, k, x;
cin >> n >> k >> x;
if (x != 1)
{
cout << "YES\n";
cout << n <<"\n";
for (int i = 1; i < n + 1; i++)
{
cout << 1 << " ";
}
endl;
return;
}
if (n == 1 || k <= 1)
{
cout << "NO\n";
return;
}
if (n % 2 == 0)
{
cout << "YES" << "\n";
cout << n / 2 << "\n";
for (int i = 1; i <= n / 2; i++)
{
cout << 2 << " ";
}
cout << "\n";
return;

}
if (k > 2)
{
cout << "YES\n";
cout << (n - 3) / 2 + 1 <<"\n";
for (int i = 1; i <= (n - 3) / 2; i++)
{cout << 2 << " ";
}
cout << 3;
cout << "\n";
return;

 }
 cout << "NO" << "\n";

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