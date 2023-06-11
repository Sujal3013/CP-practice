#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // Your code starts here
        int n, k;
        cin >> n >> k;
        int max_num = k / n;
        if (n > k)
        {
            if (n % k == 0)
            {
                k = n;
            }
            else
            {
                k = k * ((n / k) + 1);
            }
            max_num = k / n;
        }
        if (k % n)
        {
            max_num = max_num + 1;
        }

        cout << max_num << endl;
    }
    return 0;
}