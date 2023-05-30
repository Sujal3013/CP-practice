#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n % 10;
        int d = floor(log10(n) + 1);
        int a[] = {1, 3, 6, 10};
        int ans = ((x - 1) * a[3]) + a[d - 1];
        cout << ans<<endl;
    }
}