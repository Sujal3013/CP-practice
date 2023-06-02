#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, x, sqr = 0;
        cin >> x >> n;
        if (x == 1)
        {
            sqr = n * n;
        }
        else
        {
            while (x > 1)
            {
                unsigned long long a = n / x;
                unsigned long long b = n - a;
                n = max(a, b);
                x--;
                sqr += pow(min(a, b), 2);
            }
            sqr += pow(n, 2);
        }

        cout << sqr << endl;
    }
}