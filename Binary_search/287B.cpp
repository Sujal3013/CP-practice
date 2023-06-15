#include <iostream>
using namespace std;
long long n, sum = 1;
int k, cnt = 0;
int main() {
	cin >> n >> k;
	while(cnt < k && sum < n) {
		cnt++;
		sum += k - cnt;
	}
	if(sum >= n) cout << cnt << "\n";
	else cout << "-1\n";
	return 0;
}