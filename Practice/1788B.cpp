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
#define FIO                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)

int getdigit_sum(int x)
{
  int sum = 0;
  while (x)
  {
    sum += (x % 10);
    x = x / 10;
  }
  return sum;
}

void solve()
{
  // Your code here
  int n,x,y;
  cin >> n;
  if(n%10!=9){
    x = n / 2;
    y = n - x;
  }
  else{
    int count=0;
    while(n%10==9){
      n/=10;
      count++;
    }
    x=n/2,y=n-x;
    if(count&1){
      x=x*10+5,y=y*10+4,count--;
    }
    while(count){
      x*=10;
      y*=10;
      y+=9;
      swap(x,y);
      count--;
    }
  }
  
  

  cout << x << " " << y << "\n";
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