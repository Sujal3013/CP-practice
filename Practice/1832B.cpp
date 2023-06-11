#include <bits/stdc++.h>
using namespace std;
long long t, n, k, a[200010], sum = 0;
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		a[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			a[i] += a[i - 1];
		}
		sort(a + 1, a + 1 + n);
		int l1 = 1, l2 = 2, r = n;
		while (k--)
		{
			
		}
		cout << sum << endl;
	}
}
